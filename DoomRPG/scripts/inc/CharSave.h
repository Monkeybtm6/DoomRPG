#ifndef _CHARSAVE_DH_
#define _CHARSAVE_DH_

NamedScript KeyBind void SaveCharacter();
NamedScript KeyBind void LoadCharacter();
NamedScript void DumpCharacter();
NamedScript void DepositInventory();

NamedScript void PopulateCharData(CharSaveInfo *);
NamedScript void LoadCharDataFromString(CharSaveInfo *, char const *);
NamedScript char const *MakeSaveString(CharSaveInfo *);

NamedScript void EncodeRLE(char const *, char *, bool *);
NamedScript void DecodeRLE(char const *, char *, bool *);

char ToHexChar(int);
int FromHexChar(char);
OptionalArgs(1) int HexToInteger(char const *, int);
char *StringToCharP(str);

// CRC functions
NamedScript void make_crc_table();
NamedScript void make_crc_piece(int);
NamedScript unsigned long update_crc(unsigned long, char const *, int);
NamedScript unsigned long do_crc_piece(char const *, unsigned long, int, int);
NamedScript unsigned long crc(char const *, int);

#endif