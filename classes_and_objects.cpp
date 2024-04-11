#include <iostream>
#include<list>

using namespace std;

class YoutubeChannel {
public:
	string  Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
	
};

int main(){
	YoutubeChannel ytChannel;
	ytChannel.Name = "ozer";

	return 0;
}
