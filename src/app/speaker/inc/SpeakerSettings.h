#ifndef __SPEAKERSETTINGS_H
#define __SPEAKERSETTINGS_H

#define SETTING_MQTT_LAST_PLAY_MAX      (256) 

/**
 * ������Ӧ�����ݴ洢�ļ�
 */
#define SPEAKER_SETTING_FILE    DEVICE_DIR_PATH"/settings"

/**
 * mtqq��һ�ʲ�������
 */
#define SETTING_MQTT_LAST_PLAY_CONTENT     gSpeakerSettings.mLastMQTTPlayContent

/**
 * ������Ӧ����Ҫ�洢������
 */
typedef struct _SpeakerSetting
{
    char mLastMQTTPlayContent[SETTING_MQTT_LAST_PLAY_MAX + 1];
}SpeakerSetting;

extern SpeakerSetting gSpeakerSettings;








#endif