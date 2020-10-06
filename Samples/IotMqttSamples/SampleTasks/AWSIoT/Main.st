
PROGRAM _CYCLIC

	Parameters;
	
	IotMqttClient_0.Enable			:= TRUE;
	IotMqttClient_0.Connect			:= TRUE;
	IotMqttClient_0.IotMqttLink 	:= ADR(IotMqttLink);
	IotMqttClient_0.Parameters		:= IotMqttParameters;
	IotMqttClient_0();
		
	PublishTopic	:= 'B&R/Telemetry';	//Could be any topic
	SubscribeTopic	:= 'B&R/Receive';	//Could be any topic
	brsstrcat(ADR(PublishTopic),ADR(ClientID));
	
	Publish;
	Subscribe;
	
END_PROGRAM

PROGRAM _EXIT
	
    IotMqttClient_0(Enable	:= FALSE);
    IotMqttPublish_0(Enable	:= FALSE);	
    IotMqttSubscribe_0(Enable := FALSE);
    
END_PROGRAM
