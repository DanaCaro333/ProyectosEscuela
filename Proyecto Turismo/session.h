#ifndef SESSION_H
#define SESSION_H


class Session
{
public:
    static Session *get();

    void set_user_id(int id) {
        m_user_id = id;
    }

    int get_user_id() {
        return m_user_id;
    }

private:
    Session() = default;
    ~Session();
    static Session *s_instance;
    int m_user_id = -1;
};

#endif // SESSION_H
