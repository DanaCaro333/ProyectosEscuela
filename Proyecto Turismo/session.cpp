#include "session.h"

Session* Session::s_instance = nullptr;
Session::~Session()
{
    if (s_instance) {
        delete s_instance;
    }
}

Session * Session::get() {
    if (!s_instance) {
        s_instance = new Session();
    }
    return s_instance;
}
