import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Song Player")


    // dividir ventana en dos secciones

    Rectangle{
        id: topbar
        anchors{
            top: parent.top
            left: parent.left
            right: parent.right

        }

        height: 50
        color: "#5F8575"
    }
    Rectangle{
        id: mainSection
        anchors{
            top: topbar.bottom
            bottom: bottomBar.top
            left: parent.left
            right: parent.right
        }
        color: "#1e1e1e"
    }
    Rectangle{
        id: bottomBar

        anchors{
            bottom: parent.bottom
            left: parent.left
            right: parent.right
        }
        height: 50
        color:"#333333"
    }
}
