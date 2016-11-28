#include "Clients.hpp"
#include "Database.hpp"

int main()
{
    Observer obs;
    Database database(obs);

    Chart chart(obs);
    Calculator calculator(obs);

    //{
        EmailSender emailSender(database, obs);

        database.initialize();

        database.changeData("top sectret");
    //}

    database.changeData("other sectret"); // what is wrong with this code?
                                            // I expect to no email sending, but application crashed... ;(

}
