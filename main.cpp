#include <array>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

enum class Role
{
    TOP,
    JG,
    MID,
    BOT,
    SUPP,
};

class Player
{
    using enum Role;

    std::string m_nickname;
    Role m_role;
};
class Team
{
    std::array<Member, 5> m_players;
    
public:
    bool loadFromFile(const std::string& filename)
    {
        std::ifstream fin(filename);
        std::string top_name, jg_name, mid_name, bot_name, supp_name;
        int top_score, jg_score, mid_score, bot_score, supp_score;
        int team_count{ 0 };

        std::vector<Team> teams;
        while (fin >> top_name)
        {
            fin >> top_score >> 
            jg_name >> jg_score >>
            mid_name >> mid_score >>
            bot_name >> bot_score >>
            supp_name >> supp_score;

            Player top(top_name, top_score);
            Player jg(jg_name, jg_score);
            Player mid(mid_name, mid_score);
            Player bot(bot_name, bot_score);
            Player supp(supp_name, supp_score);
            
            Team t;
            t.addTop(top);
            t.addTop(top);
            t.addTop(top);
            t.addTop(top);
            t.addTop(top);
            team_count++;
        }
        for (std::size_t i = 0; i < team_count; i++)
        {
            
    }
}

int main()
{
        
}
