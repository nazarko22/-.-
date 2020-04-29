
import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2


ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Програма")

    menuBar: MenuBar {
        Menu {
            title: qsTr("Файл")
            MenuItem {
                id: fileopenaction
                text: qsTr("&Відкрити")
                iconSource: "images/fileopen.png"
                iconName: "document-open"
                onTriggered: fileOpenDialog.open();
            }
            MenuItem {
                text: qsTr("&Зберегти")
                onTriggered: console.log("Open action triggered");
            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }

        }
        Menu {
            title: qsTr("Редагувати")
            MenuItem {
                id: copyaction
                    text: qsTr("&Копіювати")
                    shortcut: "Ctrl+C"
                    iconSource: "images/editcopy.png"
                    iconName: "edit-copy"
                    onTriggered: textarea.copy()
                   }
            MenuItem {
                id: cutaction
                text: qsTr("&Вирізати")
                shortcut: "ctrl+x"
                iconSource: "images/editcut.png"
                iconName: "edit-cut"
                onTriggered: textarea.cut();
            }
            MenuItem {
                id: pasteaction
                text: qsTr("Вставити")
                shortcut: "ctrl+v"
                iconSource: "qrc:images/editpaste.png"
                iconName: "edit-paste"
                onTriggered: textarea.paste();
            }

        }
        Menu {
            title: qsTr("&Допомога")
            MenuItem {
                text: qsTr("Про нас...")
                onTriggered: aboutDialog.open()
            }
        }
    }


    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }

      FileDialog {
          id: fileSaveDialog
          title: "Please enter the file to save"
          nameFilters: ["Text files (*.txt)"]
          selectExisting: false
          onAccepted: document.saveFile(fileUrl)
      }
      MessageDialog {
              id: aboutDialog
              icon: StandardIcon.Information
              title: qsTr("Про...")
              text: "Інформація про нас"
              informativeText: qsTr("Це тестова інформація про програму"
                                    + "\n Яка виведеться в деклька рядків "
                                    + "останній рядок.")
          }

}
