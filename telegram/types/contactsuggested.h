// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_CONTACTSUGGESTED
#define LQTG_TYPE_CONTACTSUGGESTED

#include "telegramtypeobject.h"
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT ContactSuggested : public TelegramTypeObject
{
public:
    enum ContactSuggestedType {
        typeContactSuggested = 0x3de191a1
    };

    ContactSuggested(ContactSuggestedType classType = typeContactSuggested, InboundPkt *in = 0);
    ContactSuggested(InboundPkt *in);
    virtual ~ContactSuggested();

    void setMutualContacts(qint32 mutualContacts);
    qint32 mutualContacts() const;

    void setUserId(qint32 userId);
    qint32 userId() const;

    void setClassType(ContactSuggestedType classType);
    ContactSuggestedType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const ContactSuggested &b);

private:
    qint32 m_mutualContacts;
    qint32 m_userId;
    ContactSuggestedType m_classType;
};

#endif // LQTG_TYPE_CONTACTSUGGESTED
