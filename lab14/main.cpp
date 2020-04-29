#include <QCoreApplication>
#include <QFile>
#include <QDataStream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int n = 10; // кількість записів

    QFile file("file.bin");
    if(file.open(QIODevice::WriteOnly))
    {
        QDataStream stream(&file);
        stream. setVersion(QDataStream::Qt_4_2);
        for (int i  =0 ; i < n; i++)
        {
            stream << "name" + QString::number(i) << QString::number(rand()%10) <<
                      QString::number(i%5);
        }

        if(stream.status() != QDataStream::Ok)
        {
            qDebug() << "Ошибка записи";
        }
    }
    file.close();

    QString name;
    QString group, stud;

    QList <int> l;
    l.push_back(-1);
    int count = 0, leng = 1;
    if(file.open(QIODevice::ReadOnly))
    {
        QDataStream stream(&file);
        stream.setVersion (QDataStream::Qt_4_2) ;
        for (int i = 0; i < n; i++)
        {
            stream >> name >> group >> stud;
            leng = l.size();
            bool f = false;
            for (int j = 0 ;j < leng; j++)
            {
//                qDebug() << l.takeLast() << " " << stud.toInt();
                if (l.at(j) == stud.toInt())
                {
                    qDebug() << name;
                    f= true;
                    break;
                }

            }
            if (!f)
            {
                l.push_back(stud.toInt());
            }
            count += stud.toInt();
        }
        if(stream.status() != QDataStream::Ok)
        {
            qDebug() << "Ошибка чтения файла";
        }
        qDebug() << count;
        file.close();
    }

    return a.exec();
}
