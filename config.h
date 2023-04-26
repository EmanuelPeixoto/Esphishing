int stationConnected = 0;
int stationPhished = 0;
int ledState = 0;
// settings.json

int whiteHat;
char ssid[32];
char password[64];
int channel;
int hidden;

char local_IPstr[16];
char local_MAC[20];
char gatewaystr[16];
char subnetstr[16];

char update_username[32];
char update_password[64];

char ftp_username[32];
char ftp_password[64];
int ftpenabled;
int esportalenabled;

String total;
String used;
String freespace;

int numStationsConnected;
int numStationsHaveConnected;
int listofConnectStations[8];

char stationIP[50];
char stationMac[32];
int stationID = 0;

const char *whiteHatDefault= "0";
const char *esportalenabledDefault = "1";

const char *ssidDefault= "espbug8266";
const char *passwordDefault = "espbug8266";
const char *channelDefault= "11";
const char *hiddenDefault = "1";

const char *local_IPDefault = "192.168.0.1";
const char *local_MACDefault = "00:E0:4C:26:AF:C7";
const char *gatewayDefault = "192.168.0.1";
const char *subnetDefault = "255.255.255.0";

const char *update_usernameDefault = "espbug";
const char *update_passwordDefault = "espbug";

const char *ftp_usernameDefault = "espbug8266";
const char *ftp_passwordDefault = "espbug8266";
const char *ftpenabledDefault = "1";