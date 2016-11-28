#include <iostream>
#include <string>

int main(void)
{
    std::string page;
    page.append("<html><body>");
    page.append("<h1>Welcome to my website</h1>");
    page.append("<p>This website is under construction.</p>");
    page.append("</body></html>");
    std::cout << page;
    return 0;
}
