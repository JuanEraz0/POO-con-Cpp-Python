import QtQuick
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    color: "#afbbf4"


    GridLayout{
        anchors.fill: parent
        rows: 2
        columns: 2
        rowSpacing: 10
        columnSpacing: 10

    Item{
        //se ajusta al primer elemento del Layout, [1,1]
        Layout.fillWidth: true
        Layout.fillHeight: true
        Rectangle{

            //definiendo su propiedad geometrica con anchors esto permite agrupar las propiedades geometricas para no definirlas una x una
            anchors{
                top: parent.verticalCenter
                left: parent.horizontalCenter
            }
            width: 50
            height: 50
            color: "darkblue"
            x: 50
            y: 50


        }
    }
    Item{
        //se ajusta al segundo elemento del Layout, [1,1]
        Layout.fillWidth: true
        Layout.fillHeight: true
    Rectangle{
        anchors{
            top: parent.verticalCenter
            left: parent.horizontalCenter
        }
        width: 100
        height: 75
        color: "darkred"
    }
    }
    Item{
        Layout.fillWidth: true
        Layout.fillHeight: true
        //Flow es un positioner, que cuando hay un overflow de items, el siguiente item se mueve a la linea que sigue
        Flow{
            anchors.fill: parent
            spacing: 20
            //Repeater nos permite crear objetos repetidos con model: n veces
            Repeater{
                model: 5

                Rectangle{
                    width: 50
                    height: 50

                    color:"darkgreen"
                }
            }

        }
    }
    Item{
        Layout.fillWidth: true
        Layout.fillHeight: true

        GridLayout{
            anchors.fill: parent
            rows: 2
            columns: 2
            rowSpacing: 20
            columnSpacing: 20

            Rectangle{
                Layout.fillWidth: true
                Layout.fillHeight: true
                color: "black"
            }

            Rectangle{
                Layout.fillWidth: true
                Layout.fillHeight: true
                color: "red"
            }

            Rectangle{
                Layout.fillWidth: true
                Layout.fillHeight: true
                Layout.columnSpan: 2
                color: "darkblue"
            }

        }
    }

    }

}
