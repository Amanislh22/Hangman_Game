#ifndef STATE_H
#define STATE_H
enum State {
    replay = 0,
    Home = 1,
};
enum game_mode{
    single_player_mode=0,
    multi_playe_moder=1,
};
enum tree_or_file
{
    Tree=0,
    File=1,
};
enum write_op{
    write=0,
    read=1,
};
enum palying_state_e {
    waiting = 0 ,
    playing= 1,
};

#endif // STATE_H
