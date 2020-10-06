/* Automation Studio generated header file */
/* Do not edit ! */
/* IotMqtt 4.63.1 */

#ifndef _IOTMQTT_
#define _IOTMQTT_
#ifdef __cplusplus
extern "C" 
{
#endif
#ifndef _IotMqtt_VERSION
#define _IotMqtt_VERSION 4.63.1
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef _SG3
		#include "AsIecCon.h"
		#include "AsHW.h"
		#include "ArEventLog.h"
		#include "sys_lib.h"
		#include "FileIO.h"
		#include "ArCert.h"
		#include "AsETH.h"
#endif
#ifdef _SG4
		#include "AsIecCon.h"
		#include "AsHW.h"
		#include "ArEventLog.h"
		#include "sys_lib.h"
		#include "FileIO.h"
		#include "ArCert.h"
		#include "AsETH.h"
#endif
#ifdef _SGC
		#include "AsIecCon.h"
		#include "AsHW.h"
		#include "ArEventLog.h"
		#include "sys_lib.h"
		#include "FileIO.h"
		#include "ArCert.h"
		#include "AsETH.h"
#endif


/* Constants */
#ifdef _REPLACE_CONST
 #define IOTMQTT_ERR_CONN_REFUSED (-8)
 #define IOTMQTT_ERR_NOT_FREE_HEAP (-10000)
 #define IOTMQTT_ERR_NULL_HANDLE (-10001)
 #define IOTMQTT_ERR_INVALID_HANDLE (-10002)
 #define IOTMQTT_ERR_CA_CERTIFICATE (-10003)
 #define IOTMQTT_ERR_CONNECTION_LOST (-10004)
 #define IOTMQTT_ERR_CONNECTION_FAILED (-10005)
 #define IOTMQTT_ERR_SUBSCRIBE (-10006)
 #define IOTMQTT_ERR_FIFO_PUBLISH (-10007)
 #define IOTMQTT_ERR_FIFO_SUBSCRIBE (-10008)
 #define IOTMQTT_ERR_WRONG_PUBLISH_PAR (-10009)
 #define IOTMQTT_ERR_WRONG_SUBSCRIBE_PAR (-10010)
 #define IOTMQTT_ERR_SUBSCRIBE_MAX_TOPICS (-10011)
 #define IOTMQTT_ERR_WRONG_QUEUE_SIZE (-10012)
 #define IOTMQTT_ERR_IOT_MQTT_LINK_IN_USE (-10013)
 #define IOTMQTT_WRN_ALREADY_ALLOCATED (-20001)
 #define IOTMQTT_WRN_ALREADY_FREED (-20002)
 #define IOTMQTT_WRN_NO_MORE_MESSAGES (-20003)
 #define IOTMQTT_WRN_FAILURE_SENDING (-20004)
 #define IOTMQTT_WRN_FIFO_EMPTY (-20005)
 #define IOTMQTT_WRN_CLIENT_DISABLED (-20006)
 #define IOTMQTT_NO_ERR 0
 #define MAX_SUBSCRIPTION_TOPICS 50U
 #define MAX_ENTRIES_RECEIVED_MESSAGES 10U
 #define MAX_ENTRIES_PUBLISH_MESSAGES 50U
 #define MAX_ENTRIES_SUBSCRIBE_OBJECTS 50U
 #define MAX_MESSAGE_TOKEN_TABLE 1000U
 #define MAX_PUBLISH_FUBS 50U
 #define MAX_SUBSCRIBE_FUBS 50U
#else
 _GLOBAL_CONST signed long IOTMQTT_ERR_CONN_REFUSED;
 _GLOBAL_CONST signed long IOTMQTT_ERR_NOT_FREE_HEAP;
 _GLOBAL_CONST signed long IOTMQTT_ERR_NULL_HANDLE;
 _GLOBAL_CONST signed long IOTMQTT_ERR_INVALID_HANDLE;
 _GLOBAL_CONST signed long IOTMQTT_ERR_CA_CERTIFICATE;
 _GLOBAL_CONST signed long IOTMQTT_ERR_CONNECTION_LOST;
 _GLOBAL_CONST signed long IOTMQTT_ERR_CONNECTION_FAILED;
 _GLOBAL_CONST signed long IOTMQTT_ERR_SUBSCRIBE;
 _GLOBAL_CONST signed long IOTMQTT_ERR_FIFO_PUBLISH;
 _GLOBAL_CONST signed long IOTMQTT_ERR_FIFO_SUBSCRIBE;
 _GLOBAL_CONST signed long IOTMQTT_ERR_WRONG_PUBLISH_PAR;
 _GLOBAL_CONST signed long IOTMQTT_ERR_WRONG_SUBSCRIBE_PAR;
 _GLOBAL_CONST signed long IOTMQTT_ERR_SUBSCRIBE_MAX_TOPICS;
 _GLOBAL_CONST signed long IOTMQTT_ERR_WRONG_QUEUE_SIZE;
 _GLOBAL_CONST signed long IOTMQTT_ERR_IOT_MQTT_LINK_IN_USE;
 _GLOBAL_CONST signed long IOTMQTT_WRN_ALREADY_ALLOCATED;
 _GLOBAL_CONST signed long IOTMQTT_WRN_ALREADY_FREED;
 _GLOBAL_CONST signed long IOTMQTT_WRN_NO_MORE_MESSAGES;
 _GLOBAL_CONST signed long IOTMQTT_WRN_FAILURE_SENDING;
 _GLOBAL_CONST signed long IOTMQTT_WRN_FIFO_EMPTY;
 _GLOBAL_CONST signed long IOTMQTT_WRN_CLIENT_DISABLED;
 _GLOBAL_CONST signed long IOTMQTT_NO_ERR;
 _GLOBAL_CONST unsigned short MAX_SUBSCRIPTION_TOPICS;
 _GLOBAL_CONST unsigned short MAX_ENTRIES_RECEIVED_MESSAGES;
 _GLOBAL_CONST unsigned short MAX_ENTRIES_PUBLISH_MESSAGES;
 _GLOBAL_CONST unsigned short MAX_ENTRIES_SUBSCRIBE_OBJECTS;
 _GLOBAL_CONST unsigned short MAX_MESSAGE_TOKEN_TABLE;
 _GLOBAL_CONST unsigned short MAX_PUBLISH_FUBS;
 _GLOBAL_CONST unsigned short MAX_SUBSCRIBE_FUBS;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum IotMqttConnTypeEnum
{	IotMqtt_TCP,
	IotMqtt_WS
} IotMqttConnTypeEnum;

typedef enum IotMqttQosEnum
{	IotMqtt_QoS0 = 0,
	IotMqtt_QoS1 = 1,
	IotMqtt_QoS2 = 2
} IotMqttQosEnum;

typedef enum IotMqttPublishModeEnum
{	IotMQTT_PUB_MODE_TIME,
	IotMQTT_PUB_MODE_TRIGGER,
	IotMQTT_PUB_MODE_VALUE,
	IotMQTT_PUB_MODE_TIME_TRIGGER,
	IotMQTT_PUB_MODE_TIME_VALUE,
	IotMQTT_PUB_MODE_TRIGGER_VALUE,
	IotMQTT_PUB_MODE_TIME_TRG_VALUE
} IotMqttPublishModeEnum;

typedef enum IotMqttLogLevelEnum
{	IOTMQTT_LOG_LEVEL_ERROR,
	IOTMQTT_LOG_LEVEL_PROTOCOL,
	IOTMQTT_LOG_LEVEL_MAXIMUM
} IotMqttLogLevelEnum;

typedef enum IotMqttConnectionStateEnum
{	IOTMQTT_DISABLED,
	IOTMQTT_DISCONNECTED,
	IOTMQTT_DISCONNECTING,
	IOTMQTT_CONNECTED,
	IOTMQTT_CONNECTING,
	IOTMQTT_CONNECTION_LOST,
	IOTMQTT_CONNECTION_ERROR
} IotMqttConnectionStateEnum;

typedef struct IotMqttPayloadType
{	unsigned long pData;
	unsigned long Len;
} IotMqttPayloadType;

typedef struct IotMqttSubscribeInfoType
{	unsigned long NumberOfLostMessages;
	unsigned long MessagesInQueue;
	unsigned long AvailableMessageSlots;
	unsigned long TotalReceivedMessages;
} IotMqttSubscribeInfoType;

typedef struct IotMqttPublishInfoType
{	unsigned long MessagesPublished;
	unsigned long DeliveriesCompleted;
	unsigned long PublishErrorCounter;
} IotMqttPublishInfoType;

typedef struct IotMqttClientParLastWillType
{	plcbit UseLastWill;
	unsigned long Topic;
	unsigned long Buffer;
	unsigned long BufferLength;
	enum IotMqttQosEnum QoS;
	plcbit Retain;
	struct IotMqttPayloadType Payload;
} IotMqttClientParLastWillType;

typedef struct IotMqttClientParTLSType
{	plcbit UseTLS;
	unsigned long CA;
	unsigned long Cert;
	unsigned long PrivateKey;
	unsigned long PrivateKeyPassword;
	unsigned long EnabledCipherSuites;
	plcbit EnableServerCertAuth;
} IotMqttClientParTLSType;

typedef struct IotMqttClientParType
{	plcstring ServerUri[201];
	unsigned short Port;
	plcstring ClientID[81];
	plcstring UserName[81];
	plcstring Password[201];
	plctime KeepAliveInterval;
	struct IotMqttClientParLastWillType LastWill;
	plctime ConnectTimeout;
	unsigned short MaxInFlight;
	plctime MinRetryInterval;
	plctime MaxRetryInterval;
	struct IotMqttClientParTLSType TLS;
	plcbit PersistentData;
	plcbit AutomaticReconnect;
	enum IotMqttConnTypeEnum ConnectionType;
	plcbit CleanSession;
} IotMqttClientParType;

typedef struct IotMqttClientInfoType
{	enum IotMqttConnectionStateEnum ConnectionState;
	unsigned long NumberActivePublishersFubs;
	unsigned long NumberActiveSubscribersFubs;
	unsigned long PublishMessageCount;
	unsigned long SubscribeMessageCount;
} IotMqttClientInfoType;

typedef struct IotMqttReceivedMessageType
{	unsigned long Topic;
	unsigned short TopicLen;
	unsigned long Buffer;
	unsigned long BufferLen;
	unsigned char QoS;
	plcbit Retained;
} IotMqttReceivedMessageType;

typedef struct IoTMqttComIdentType
{	unsigned long Internal;
	unsigned long pThreadHandle;
	unsigned long pThreadAttr;
	unsigned long inst;
} IoTMqttComIdentType;

typedef struct IotMqttConfigParametersType
{	enum IotMqttLogLevelEnum LogLevel;
	plcbit UseLogger;
	plcstring LoggerName[9];
	unsigned long LoggerSize;
	plcbit UseFile;
	plcstring LogFileName[81];
	plcstring LogFileDevice[81];
	plcbit AppendTimestamp;
	plcbit OverwritteLogs;
	plcstring PersistenceFileDevice[81];
} IotMqttConfigParametersType;

typedef struct IotMqttClient
{
	/* VAR_INPUT (analog) */
	struct IoTMqttComIdentType* IotMqttLink;
	struct IotMqttClientParType Parameters;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	struct IotMqttClientInfoType Info;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Connect;
	plcbit ErrorReset;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit Connected;
} IotMqttClient_typ;

typedef struct IotMqttPublish
{
	/* VAR_INPUT (analog) */
	struct IoTMqttComIdentType* IotMqttLink;
	unsigned long Topic;
	enum IotMqttQosEnum QoS;
	unsigned long Buffer;
	unsigned long BufferLength;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	struct IotMqttPublishInfoType Info;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Send;
	plcbit Retained;
	/* VAR_OUTPUT (digital) */
	plcbit Busy;
	plcbit Active;
	plcbit Done;
	plcbit Error;
	/* VAR (digital) */
	plcbit _Send;
	plcbit _Active;
} IotMqttPublish_typ;

typedef struct IotMqttSubscribe
{
	/* VAR_INPUT (analog) */
	struct IoTMqttComIdentType* IotMqttLink;
	unsigned long Topic;
	enum IotMqttQosEnum SubscriptionQoS;
	unsigned long RecievedTopic;
	unsigned long RecievedTopicSize;
	unsigned char QueueSize;
	unsigned long Buffer;
	unsigned long BufferSize;
	/* VAR_OUTPUT (analog) */
	enum IotMqttQosEnum ReceivedQoS;
	signed long StatusID;
	unsigned long DataSize;
	struct IotMqttSubscribeInfoType Info;
	/* VAR (analog) */
	unsigned long _Internal;
	unsigned long _FifoHandle;
	unsigned long _FifoLock;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Read;
	/* VAR_OUTPUT (digital) */
	plcbit Retained;
	plcbit Active;
	plcbit Subscribed;
	plcbit MessageRetrieved;
	plcbit Error;
	plcbit Busy;
	plcbit NewDataValid;
	/* VAR (digital) */
	plcbit _Enable;
	plcbit _Active;
	plcbit _Read;
	plcbit _Subscribing;
} IotMqttSubscribe_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void IotMqttClient(struct IotMqttClient* inst);
_BUR_PUBLIC void IotMqttPublish(struct IotMqttPublish* inst);
_BUR_PUBLIC void IotMqttSubscribe(struct IotMqttSubscribe* inst);
_BUR_PUBLIC signed short IotMqttConfig(struct IotMqttConfigParametersType** ConfigParameters);
_BUR_PUBLIC signed short AzureGenerateDeviceCredentials(unsigned long pConnectionString, unsigned char TimeToLive, unsigned long pParameters, unsigned long PublishTelemetryTopic, unsigned long SizeofPublishTelemetryTopic, unsigned long SubscribeTelemetryTopic, unsigned long SizeofSubscribeTelemetryTopic);


#ifdef __cplusplus
};
#endif
#endif /* _IOTMQTT_ */

