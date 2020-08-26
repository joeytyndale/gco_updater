#include "HTTPRequest.hpp"
#include <iostream> 

int main(){
    try
    {
        // you can pass http::InternetProtocol::V6 to Request to make an IPv6 request
        http::Request request("http://api.joeytyndale.com");

        // send a get request
        const http::Response response = request.send("GET");
        std::cout << std::string(response.body.begin(), response.body.end()) << '\n'; // print the result
    }
    catch (const std::exception& e)
    {
        std::cerr << "Request failed, error: " << e.what() << '\n';
    }

    return 0;
}
