#include <QCoreApplication>
#include <QQueue>
#include <QStack>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QQueue<int> q1,q2;

    for (int i = 0; i< 10; i++)
    {
        q1.enqueue(i);
        q2.enqueue(10 + i);
    }

    // завдання 1
    for (int i = 0; i < 10; i++)
        q1.enqueue(q2.dequeue());

    // завдання 2
    QStack <int> s;
    int leng = q1.size();
    for (int i = 0; i < leng; i ++)
        s.push(q1.dequeue());

    while(!s.isEmpty())
        qDebug() << s.pop();

    return a.exec();
}
