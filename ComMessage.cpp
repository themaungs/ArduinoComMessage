#include "Arduino.h"
#include "ComMessage.h"

ComMessage::ComMessage(String sender, String receiver, String secret, String payload, String payloadType){
  Sender = sender;
  Receiver = receiver;
  Secret = secret;
  Payload = payload;
  PayloadType = payloadType;
  PayloadType.toUpperCase();
}