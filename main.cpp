#include <QtCore/QCoreApplication>

#include "mailsender.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MailSender test("send.one.com", "test@blub-game.com", QStringList("markus.lanner@yahoo.de"), "Subject", "<html><header></header><body><H1>L'été Ångström</H1></body></html>");
/*    test.setSubject("Test2"),
    test.setBody("<html><header></header><body><H1>L'été Ångström</H1></body></html>");
*/    test.setContentType(MailSender::html);
    test.setLogin("test@blub-game.com", "orlando");
    test.setSsl(true);
/*    test.setPort(587);
    test.setBcc(QStringList("ilya.xxxxxx@gmail.com"));
    test.setAttachments(QStringList("d:\\LH_ENTNS_ALC.pdf"));
*/    test.setPriority(MailSender::high);
    if(test.send()) {
            // mail sent !
    }
    else {
            // failed to send mail
            // display test.lastError(), test.lastCmd(), test.lastResponse()
    }

    return 1;//a.exec();
}
