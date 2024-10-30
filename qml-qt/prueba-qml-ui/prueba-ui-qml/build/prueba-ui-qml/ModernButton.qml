// ModernButton.qml
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtGraphicalEffects 1.15  // Para efectos como sombra

Rectangle {
    id: button
    width: 150
    height: 50
    radius: 10
    color: "#3498db"  // Color de fondo por defecto

    // Efecto de sombra
    DropShadow {
        anchors.fill: parent
        radius: 10
        samples: 15
        color: "black"
        spread: 0.2
        x: 0
        y: 5
    }

    // Contenido del botón
    Text {
        anchors.centerIn: parent
        text: "Modern Button"
        font.pixelSize: 18
        color: "white"
        font.bold: true
    }

    // Efecto de hover para cambiar de color
    MouseArea {
        id: mouseArea
        anchors.fill: parent
        cursorShape: Qt.PointingHandCursor

        // Cambio de color en hover
        onEntered: {
            button.color = "#2980b9";
        }
        onExited: {
            button.color = "#3498db";
        }

        // Animación al hacer clic
        onPressed: {
            button.scale = 0.95;  // Le da un efecto de clic al botón
        }
        onReleased: {
            button.scale = 1.0;
        }
    }
}

