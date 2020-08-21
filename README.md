# Monopoly_Game_CPP
This game is BGI based project and implementation done with OOP C++ concepts

zip file deleted

New files add source, header and txt files

Information regarding game is following

Monopoly is a multi-player game, played on a 2-D board which contain 40 cells. It is played by rolling the six sided dice in each turn and the player can buy, sell, upgrade, mortgage and un-mortgage the properties where he landed on. The winner is the last player left after all the others have gone bankrupt. A player in game avoids to go bankrupt; by selling all the buildings at a loss, mortgaging all the real estate and giving up all the cash.

Rules of game are listed here.

1. How to Play?
      
      The game starts with Go cell, and each player rolls the six sided dice and moves forward in clock wise direction. Whenever a round is completed and player crosses the Go cell again he will collect 500 PKR from the bank.

The rules for other cell types in game are listed below.


2. Properties:

a. If a player lands on an unowned property, whether residential, commercial, public stations or utility, they can buy the property for its listed purchase price.

b. If he declines this purchase offer, the property is auctioned off by the bank to the highest bidder, including the player who declined to buy.

c. If the property landed on is already owned, he must pay the owner a given rent for un-mortgaged property, the price depends on whether the property is part of a set, upgraded     or not.

d. Once the player owns an entire group, he can collect double rent for any undeveloped properties within it.

e. Upgrade Property: When a player owns all of the properties in a group and none of them are mortgaged, then he can upgrade them during his turn. Development involves buying      shops, houses or hotels from the bank and placing them on the property spaces, and this must be done uniformly across the group.
   That is, a second house cannot be built on any property within a group until all of them have one house. Houses, hotels and shops cannot be built on stations or utilities. A    player can add only one Wi-Fi, Gas connection, and electricity for each house. The rent of property will be increased according to percentage cost of a development.

3. Chance/Community Chest: There are total 15 chance and 15 community chest cards.
    If a player lands on a Chance or Community Chest cell, he will draw the top card from the respective deck and will follow its instructions. This may include collecting or       paying money to the bank or to another player, or moving to a different space on the board.
    The list of instructions are given in files chance and community chest. The decks of those card must be shuffled well before start of game.

4. Jail: A player is sent to jail for doing any of the following:
        a. If he lands on No Go Area cell
        b. Draws a "Go to Jail" card from Chance or Community Chest

  When a player is sent to jail, he moves directly to the Jail and his turn ends. If he pass Go then cannot collect the money from bank. If a player is in jail, he cannot take a     normal turn and must either pay a fine of 400 PKR to be released, or use a Chance or Community Chest “Get out of Jail Free” card. Otherwise his next 2 turns will be skipped.
    Players in jail cannot buy properties directly from the bank, due to being unable to move, but can engage in all other transactions, such as mortgaging properties, selling       properties to other players, selling houses, hotels and shops, collecting rent, and bidding on property auctions.

5. Mortgage:
    A player can mortgage properties, even with houses, hotels and shops. The player receives money from the bank for each mortgaged property (half of the purchase price and upgrade price), which must be repaid to bank with 20% interest to un-mortgage. Players cannot collect rent on mortgaged properties, but can sell them to other players.
The player buying the mortgaged property must immediately un-mortgage it for the mortgage price plus 20% interest, or pay the bank just the 20% amount and keep the property mortgaged. If the player chooses the second option, then he must still pay the 20% again if the property is later un-mortgaged

6. Bankrupt:
    a. A player who cannot pay the debt is bankrupt and eliminated from the game. If the bankrupt player owes to the bank, then he must give back all of the assets to the bank,        bank then will auction off the properties, except buildings.
    b. If the debt is instead to another player, all the assets must be given to that opponent, except buildings, which must be returned to the bank
        The new owner must either pay the bank to un-mortgage any such properties received or pay a fee of 20% of the mortgaged value to the bank, if they choose to leave the            properties mortgaged.

8. Winner:
    The winner of game is the last player left after all the others have gone bankrupt.

Other Requirements:

1. Initial Money: When the game starts all players (2 - 5) will be given same amount of money say 5000 PKR. Whenever a player will buy or sell a property the ownership status must be visible on board. At start all properties, and upgrades will be owned by Bank only.

2. Player Info: A list of all mortgaged, upgraded properties and remaining money should be displayed for each player and must be updated too in each turn.

3. User Interaction: Your game should be user interactive and should provide proper options to player, which he can use for every move. Like buy a property, pay or collect rent, biding, mortgage/un-mortgage, buy/sell upgrades etc.

4. Save and Load: Add the save and load game functionality so that players can save current game and on start can load previous one or start new.
