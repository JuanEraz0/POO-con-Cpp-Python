import QtQuick 2.15

Window{
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Mi primera app QML")
    ModernButton{
        anchors.centerIn: parent
    }

    Rectangle{
        property color baseColor: "#3498db"
        anchors{
            bottom: parent.verticalCenter
            horizontalCenter: parent.horizontalCenter
            bottomMargin: 20
        }
        width: 150
        height: 50
        color: "red"
        Text{
            id: buttonText1
            anchors.centerIn: parent
            text: "Click me"
        }

        MouseArea{
            id: buttonMouseArea1
            anchors.fill: parent
            hoverEnabled: true

            onClicked: {

            }

        }
    }
}

