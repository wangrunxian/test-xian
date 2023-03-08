#ifndef __SPEAKERSETTINGS_H
#define __SPEAKERSETTINGS_H

#define SETTING_MQTT_LAST_PLAY_MAX      (256) 

/**
 * 云喇叭应用数据存储文件
 */
#define SPEAKER_SETTING_FILE    DEVICE_DIR_PATH"/settings"

/**
 * mtqq上一笔播报内容
 */
#define SETTING_MQTT_LAST_PLAY_CONTENT     gSpeakerSettings.mLastMQTTPlayContent

/**
 * 云喇叭应用需要存储的内容
 */
typedef struct _SpeakerSetting
{
    char mLastMQTTPlayContent[SETTING_MQTT_LAST_PLAY_MAX + 1];
}SpeakerSetting;

extern SpeakerSetting gSpeakerSettings;








#endif