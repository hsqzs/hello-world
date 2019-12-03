#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
CURL *curl;CURLcode res ;

curl=curl_ easy_ init();if(curl){

curl_ easy_ setopt(curl,CURLOPT_ URL, "http://myip. ipip.net/");
res=curl_ easy_ perform(curl);if(res!=CURLE_ OK)
fprintf(stderr, "curl_ _easy_ perform() failed:%sIn",
curl_ easy_ strerror(res));curl_ easy_ cleanup(curl);
}
return 0;
}
