
// #include "Game/Object/player.h"

// #include "Game/Object/create_player.h"

// Player *Player::pointerInstance = 0;

// void Player::addInventory(IItem* item) {
//     static int count_x = 0;
//     static int count_y = 0;

//     if (count_x == X_INVENTORY-1 && count_y == Y_INVENTORY-1) {
//         //! error --> doing messang player, what inventory not void
//         return;
//     } else {
//         if (count_x == X_INVENTORY-1) {
//             count_y++;
//         }

//         FOR_SIZE_T(i, inventory.size()) {
//             FOR_SIZE_T(j, inventory[i].size()) {
//                 if (inventory[i][j] != nullptr) {
//                     if (inventory[i][j]->getName() == item->getName()) {
//                         return; 
//                     } 
//                 }
//             }
//         }

//         inventory[count_y][count_x] = item;
//         count_x++;
//     }
// }


// void Player::move(const int choice, const vector_str map) {
//     spawn(map);

//     // if ((choice == KEY_W || choice == KEY_UP) && map[unit.y - 1][unit.x] != '#')
//     //     unit.y--;
//     // if ((choice == KEY_S || choice == KEY_DOWN) && map[unit.y + 1][unit.x] != '#')
//     //     unit.y++;
//     // if ((choice == KEY_A || choice == KEY_LEFT) && map[unit.y][unit.x - 1] != '#')
//     //     unit.x--;
//     // if ((choice == KEY_D || choice == KEY_RIGHT) && map[unit.y][unit.x + 1] != '#')
//     //     unit.x++;
    
//     // mvaddch(unit.y, unit.x, unit.icon);
// }

// void Player::spawn(const vector_str map) {
//     if (unit.spawned == false) {
//         random_device rd;
//         mt19937 gen(rd());
//         // uniform_int_distribution<> randX(1, WIDTH_SCREEN_X-1);
//         // uniform_int_distribution<> randY(1, LENGHT_SCREEN_Y-1);

//         if (!unit.spawned) {
//             // int randSpawnX = randX(gen);
//             // int randSpawnY = randY(gen);

//             // if (map[randSpawnY][randSpawnX] != '#') {
//             //     unit.x = randSpawnX;
//             //     unit.y = randSpawnY;
//             //     unit.spawned = true;
//             // } else {
//             //     spawn(map);
//             // }
//         }
//     }

// }

// int Player::createPlayer(IPlayer *&player) {
//     CreatePlayer* createPl = CreatePlayer::getInstance(player);

//     if (createPl->getErrorNumber()) {
//         return createPl->getErrorNumber();
//         delete createPl;
//     }

//     delete createPl;
//     return 0;
// }

// int Player::menuPlayer(IPlayer *&player) {
//     menuPl->init(player);
//     return 0;
// }

// Player::Player() {
//     menuPl = MenuPlayer::getInstance();

//     unit.exists = true;
//     unit.icon = '@';

//     items.resize(SIZE_ITEMS, nullptr);

//     inventory.resize(Y_INVENTORY);
//     FOR_SIZE_T(i, Y_INVENTORY) {
//         inventory[i].resize(X_INVENTORY, nullptr);
//     }

// }

// Player* Player::getInstance() {
//     if (!pointerInstance) {
//         pointerInstance = new Player();
//     }

//     return pointerInstance;
// }

// Player::~Player() {
//     delete menuPl;
// }
