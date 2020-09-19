/*------------------------------------------------*/
/*Configuration type*/

#define CONFIG_ENABLE_WEBCONFIG 1

//Replaces all values in the webconfig with the ConfigStatic.h values when CONFIG_ENABLE_WEBCONFIG is enabled
//#define CONFIG_OVERWRITE_WEBCONFIG 1
//
///*------------------------------------------------*/
///*Logging level*/
//
//#define LOGLEVEL LOG_LEVEL_INFOS
////#define LOGLEVEL LOG_LEVEL_DEBUG
////#define LOGLEVEL LOG_LEVEL_VERBOSE
//
///*------------------------------------------------*/
///*Main static configuration*/
////This cannot be changed via web inteface
//
////#define CONFIG_LED_SPI_CHIPSET WS2815 //Comment out for clockless
//#define CONFIG_LED_CLOCKLESS_CHIPSET WS2812B //Comment in for clockless
//#define FASTLED_ALLOW_INTERRUPTS 0 //Comment in if clockless stripe (ex. WS2812B) is flickering
////#define CONFIG_LED_PWM 1 //Comment in if PWM Stripe
//
//#define CONFIG_LED_DATAPIN D8 //Comment out for PWM
////#define CONFIG_LED_CLOCKPIN D6 //Comment out for clockless / PWM
/////#define CONFIG_LED_PWM_RED D1 //Comment in for PWM
////#define CONFIG_LED_PWM_GREEN D2 //Comment in for PWM
////#define CONFIG_LED_PWM_BLUE D3 //Comment in for PWM
//
////Pin order, see FastLED doc. NodeMCU should work with FASTLED_ESP8266_RAW_PIN_ORDER
//#define FASTLED_ESP8266_RAW_PIN_ORDER
////#define FASTLED_ESP8266_NODEMCU_PIN_ORDER
////#define FASTLED_ESP8266_D1_PIN_ORDER
//
//#define CONFIG_LED_COLOR_ORDER RGB
////#define CONFIG_LED_COUNT 133
//#define CONFIG_LED_COUNT 262
//
////OFF, HYPERION_UDP, STATIC_COLOR, RAINBOW, FIRE2012
//#define CONFIG_LED_STANDARD_MODE FIRE2012
//#define CONFIG_LED_HYPERION_AUTOSWITCH true 
//#define CONFIG_LED_STANDARD_MODE_TIMEOUT_MS 5000 
//
///*------------------------------------------------*/
///*Main configuration*/
////You can leave it empty and override it via the web interface on port 80
//#define CONFIG_WIFI_SSID "DustBowl_2G"
//#define CONFIG_WIFI_PASSWORD "Q<)tpJ43yPk1~4"
//
//#define CONFIG_WIFI_STATIC_IP 1
//const byte CONFIG_WIFI_IP[] = {192, 168, 2, 84};
//const byte CONFIG_WIFI_SUBNET[] = {255, 255, 255, 0};
//const byte CONFIG_WIFI_DNS[] = {192, 168, 1, 1};
//
//#define CONFIG_WIFI_HOSTNAME "ESP8266"
//
//#define CONFIG_PORT_JSON_SERVER 19444
//#define CONFIG_PORT_UDP_LED 19446
