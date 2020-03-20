#ifndef ComMessage_h
#define ComMessage_h

class ComMessage{
  public:
    ComMessage(String Sender, String Receiver, String Secret, String Payload, String PayloadType);
    String Receiver;
    String Sender;
    String Secret;
    String Payload;
    String PayloadType;
    private:
};
#endif
