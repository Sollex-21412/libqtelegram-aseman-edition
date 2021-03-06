// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_NOTIFYPEER
#define LQTG_TYPE_NOTIFYPEER

#include "telegramtypeobject.h"
#include "peer.h"

class LIBQTELEGRAMSHARED_EXPORT NotifyPeer : public TelegramTypeObject
{
public:
    enum NotifyPeerType {
        typeNotifyPeer = 0x9fd40bd8,
        typeNotifyUsers = 0xb4c83b4c,
        typeNotifyChats = 0xc007cec3,
        typeNotifyAll = 0x74d07c60
    };

    NotifyPeer(NotifyPeerType classType = typeNotifyPeer, InboundPkt *in = 0);
    NotifyPeer(InboundPkt *in);
    virtual ~NotifyPeer();

    void setPeer(const Peer &peer);
    Peer peer() const;

    void setClassType(NotifyPeerType classType);
    NotifyPeerType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const NotifyPeer &b);

private:
    Peer m_peer;
    NotifyPeerType m_classType;
};

#endif // LQTG_TYPE_NOTIFYPEER
