import QtQuick 2.15

Window{
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Mi primera app QML")

    Rectangle{
        property color baseColor: "#3498db"
        anchors{
            bottom: parent.verticalCenter
            horizontalCenter: parent.horizontalCenter
            bottomMargin: 20
        }
        width: 150
        height: 50
        color: if (buttonMouseArea1.containsPress){
                   return Qt.darker(baseColor)
               }else if(buttonMouseArea1.containsMouse){
                   return Qt.lighter(baseColor)
               }else{
                   return baseColor
               }

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
                console.log("Boton 1 presionado ")
            }

        }
    }

    Rectangle{
        property color baseColor: "#cb3212"
        anchors{
            top: parent.verticalCenter
            horizontalCenter: parent.horizontalCenter
            topMargin: 20
        }
        width: 150
        height: 50
        color: if (buttonMouseArea2.containsPress){
                   return Qt.darker(baseColor)
               }else if(buttonMouseArea2.containsMouse){
                   return Qt.lighter(baseColor)
               }else{
                   return baseColor
               }

        Text{
            id: buttonText2
            anchors.centerIn: parent
            text: "Cerrar aplicacion"
        }

        MouseArea{
            id: buttonMouseArea2
            anchors.fill: parent
            hoverEnabled: true

            onClicked: {
                //console.log("Boton 2 presionado, cerrar aplicacion ")
                Qt.quit()
            }

        }
    }
    Connections {
        target: buttonMouseArea2

        function onClicked(){
            console.log("Boton 2 presionado, cerrar aplicacion ")
        }
    }
}

