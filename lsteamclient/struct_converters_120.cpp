#include "steam_defs.h"
#include "steamworks_sdk_120/steam_api.h"
#include "steamworks_sdk_120/isteamgameserver.h"
#include "steamworks_sdk_120/isteamgameserverstats.h"
#include "steamworks_sdk_120/isteamgamecoordinator.h"
#include "steamclient_private.h"
extern "C" {
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_120 {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_120(const void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_120 *win = (struct winLeaderboardEntry_t_120 *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_120(const void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_120 *win = (struct winLeaderboardEntry_t_120 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}


}
