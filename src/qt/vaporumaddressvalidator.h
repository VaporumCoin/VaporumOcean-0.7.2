// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef KOMODO_QT_KOMODOADDRESSVALIDATOR_H
#define KOMODO_QT_KOMODOADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class VaporumAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VaporumAddressEntryValidator(QObject *parent, bool allowZAddresses = false);

    State validate(QString &input, int &pos) const;
private:
    bool _allowZAddresses;
};

/** Vaporum address widget validator, checks for a valid vaporum address.
 */
class VaporumAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit VaporumAddressCheckValidator(QObject *parent, bool allowZAddresses = false);

    State validate(QString &input, int &pos) const;
private:
    bool _allowZAddresses;
};

#endif // KOMODO_QT_KOMODOADDRESSVALIDATOR_H
