SET(REQUIRE_PLUGIN_QML TRUE PARENT_SCOPE)
#SET(REQUIRE_PLUGIN_SETTINGS TRUE PARENT_SCOPE)

SET(QT_USE_QTDECLARATIVE TRUE)

SET( Plugin_NAME "Controllers" )


SET( Plugin_SRCS
	controller.cpp
	controllerlist.cpp
	controllersplugin.cpp
	tellstick.cpp
)

SET( Plugin_HDRS
	controllersplugin.h
)

SET( Plugin_MOC_HDRS
	controller.h
	controllerlist.h
	tellstick.h
)

SET( Plugin_RESOURCES
	controllers.qrc
)

SET( Plugin_PATH "com.telldus.controllers" )

SET( Plugin_EXTRA
	btn_action_remove.png
	btn_action_upgrade.png
	ControllerUpgradeDialog.qml
	ControllerView.qml
	header_bg.png
	HeaderTitle.qml
	icon.png
	main.qml
	qmldir
	row_bg.png
	StateLabel.qml
	tellstick.png
	tellstick_duo.png
)

FIND_LIBRARY(FTD2XX_LIBRARY ftd2xx)
FIND_PACKAGE(TelldusCore REQUIRED)
SET( Plugin_LIBRARIES ${TELLDUSCORE_LIBRARY} ${FTD2XX_LIBRARY} )

INCLUDE( ../TelldusCenterPlugin.cmake NO_POLICY_SCOPE )
