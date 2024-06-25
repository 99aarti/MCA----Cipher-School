#include <iostream>
using namespace std;
#include <iostream>

class Profile {
public:
    Profile(int followers) : followers_(followers) {}

    std::string follower_category() {
        if (followers_ > 1000) {
            return "large followers";
        } else {
            return "moderate followers";
        }
    }

private:
    int followers_;
};

int main() {
    int followers;
    std::cout << "Enter the number of followers: ";
    std::cin >> followers;

    Profile profile(followers);
    std::string result = "Influencer has " + profile.follower_category() + " followers";
    std::cout << result << std::endl;

    return 0;
}