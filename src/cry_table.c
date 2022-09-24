#include "defines.h"
#include "defines/species.h"
#define cry(sample) {0x20, 60, 0, 0,sample,0xff,0xff}
#define cry_reverse(sample) {0x30, 60, 0, 0,sample,0xff,0xff}

extern const u8 Cry_Delcatty[];
extern const u8 Cry_Moltres[];
extern const u8 Cry_Gothorita[];
extern const u8 Cry_Heliolisk[];
extern const u8 Cry_Elgyem[];
extern const u8 Cry_Flabebe[];
extern const u8 Cry_Omastar[];
extern const u8 Cry_Aggron[];
extern const u8 Cry_TornadusTherian[];
extern const u8 Cry_Pichu[];
extern const u8 Cry_Snorlax[];
extern const u8 Cry_Lillipup[];
extern const u8 Cry_Swirlix[];
extern const u8 Cry_Kecleon[];
extern const u8 Cry_Latias[];
extern const u8 Cry_Kartana[];
extern const u8 Cry_Combusken[];
extern const u8 Cry_Stunfisk[];
extern const u8 Cry_Tirtouga[];
extern const u8 Cry_Barraskewda[];
extern const u8 Cry_Hoopa[];
extern const u8 Cry_Bidoof[];
extern const u8 Cry_Chimchar[];
extern const u8 Cry_Poipole[];
extern const u8 Cry_GlalieMega[];
extern const u8 Cry_Vanillite[];
extern const u8 Cry_Duskull[];
extern const u8 Cry_Vibrava[];
extern const u8 Cry_Riolu[];
extern const u8 Cry_Simisear[];
extern const u8 Cry_Deerling[];
extern const u8 Cry_Minior[];
extern const u8 Cry_Golem[];
extern const u8 Cry_Raichu[];
extern const u8 Cry_Celesteela[];
extern const u8 Cry_Magikarp[];
extern const u8 Cry_PumpkabooSuper[];
extern const u8 Cry_Azelf[];
extern const u8 Cry_Lunala[];
extern const u8 Cry_Groudon[];
extern const u8 Cry_Latios[];
extern const u8 Cry_Aromatisse[];
extern const u8 Cry_Grovyle[];
extern const u8 Cry_Kricketot[];
extern const u8 Cry_Ampharos[];
extern const u8 Cry_Florges[];
extern const u8 Cry_Slowking[];
extern const u8 Cry_Seaking[];
extern const u8 Cry_Cyndaquil[];
extern const u8 Cry_Lilligant[];
extern const u8 Cry_Druddigon[];
extern const u8 Cry_NecrozmaDuskMane[];
extern const u8 Cry_Garchomp[];
extern const u8 Cry_Skarmory[];
extern const u8 Cry_Mew[];
extern const u8 Cry_Toxel[];
extern const u8 Cry_Klink[];
extern const u8 Cry_Golduck[];
extern const u8 Cry_HoundoomMega[];
extern const u8 Cry_Charmander[];
extern const u8 Cry_ShayminSky[];
extern const u8 Cry_Scraggy[];
extern const u8 Cry_Vanilluxe[];
extern const u8 Cry_Hitmonchan[];
extern const u8 Cry_Sunflora[];
extern const u8 Cry_Drakloak[];
extern const u8 Cry_Torkoal[];
extern const u8 Cry_Chansey[];
extern const u8 Cry_Timburr[];
extern const u8 Cry_Pheromosa[];
extern const u8 Cry_Gligar[];
extern const u8 Cry_Treecko[];
extern const u8 Cry_Emboar[];
extern const u8 Cry_LycanrocDusk[];
extern const u8 Cry_AbsolMega[];
extern const u8 Cry_Runerigus[];
extern const u8 Cry_Jellicent[];
extern const u8 Cry_NidoranM[];
extern const u8 Cry_Gigalith[];
extern const u8 Cry_Smoochum[];
extern const u8 Cry_Dracozolt[];
extern const u8 Cry_Pikipek[];
extern const u8 Cry_Gorebyss[];
extern const u8 Cry_Kangaskhan[];
extern const u8 Cry_Pincurchin[];
extern const u8 Cry_Hitmonlee[];
extern const u8 Cry_Ivysaur[];
extern const u8 Cry_Dewpider[];
extern const u8 Cry_Snover[];
extern const u8 Cry_Haxorus[];
extern const u8 Cry_Beartic[];
extern const u8 Cry_Gallade[];
extern const u8 Cry_SalamenceMega[];
extern const u8 Cry_Bulbasaur[];
extern const u8 Cry_Gastly[];
extern const u8 Cry_Carracosta[];
extern const u8 Cry_Naganadel[];
extern const u8 Cry_Sandshrew[];
extern const u8 Cry_Bruxish[];
extern const u8 Cry_Barbaracle[];
extern const u8 Cry_Machop[];
extern const u8 Cry_Drifblim[];
extern const u8 Cry_Pidove[];
extern const u8 Cry_Hatenna[];
extern const u8 Cry_SharpedoMega[];
extern const u8 Cry_Glalie[];
extern const u8 Cry_Umbreon[];
extern const u8 Cry_Minun[];
extern const u8 Cry_RayquazaMega[];
extern const u8 Cry_Talonflame[];
extern const u8 Cry_Spheal[];
extern const u8 Cry_Houndoom[];
extern const u8 Cry_Charmeleon[];
extern const u8 Cry_Malamar[];
extern const u8 Cry_Dugtrio[];
extern const u8 Cry_Cleffa[];
extern const u8 Cry_Masquerain[];
extern const u8 Cry_Yamper[];
extern const u8 Cry_MewtwoMegaY[];
extern const u8 Cry_Mareep[];
extern const u8 Cry_Pignite[];
extern const u8 Cry_Croagunk[];
extern const u8 Cry_Monferno[];
extern const u8 Cry_Chimecho[];
extern const u8 Cry_LopunnyMega[];
extern const u8 Cry_Woobat[];
extern const u8 Cry_Trapinch[];
extern const u8 Cry_Whiscash[];
extern const u8 Cry_Houndour[];
extern const u8 Cry_Exeggutor[];
extern const u8 Cry_Xatu[];
extern const u8 Cry_Fennekin[];
extern const u8 Cry_Haunter[];
extern const u8 Cry_Banette[];
extern const u8 Cry_Stakataka[];
extern const u8 Cry_OricorioPomPom[];
extern const u8 Cry_Stufful[];
extern const u8 Cry_Ninetales[];
extern const u8 Cry_Floatzel[];
extern const u8 Cry_Wooper[];
extern const u8 Cry_Beautifly[];
extern const u8 Cry_NecrozmaDawnWings[];
extern const u8 Cry_Noctowl[];
extern const u8 Cry_Bastiodon[];
extern const u8 Cry_Bewear[];
extern const u8 Cry_Manaphy[];
extern const u8 Cry_Sneasel[];
extern const u8 Cry_Doublade[];
extern const u8 Cry_Aerodactyl[];
extern const u8 Cry_HoOh[];
extern const u8 Cry_Happiny[];
extern const u8 Cry_Alcremie[];
extern const u8 Cry_Zekrom[];
extern const u8 Cry_Cloyster[];
extern const u8 Cry_Whismur[];
extern const u8 Cry_Zapdos[];
extern const u8 Cry_Chewtle[];
extern const u8 Cry_Claydol[];
extern const u8 Cry_Bronzong[];
extern const u8 Cry_CharizardMegaY[];
extern const u8 Cry_BeedrillMega[];
extern const u8 Cry_Shelgon[];
extern const u8 Cry_Omanyte[];
extern const u8 Cry_Kingdra[];
extern const u8 Cry_Scolipede[];
extern const u8 Cry_Rapidash[];
extern const u8 Cry_Drowzee[];
extern const u8 Cry_Feebas[];
extern const u8 Cry_Sobble[];
extern const u8 Cry_Staryu[];
extern const u8 Cry_Giratina[];
extern const u8 Cry_Arceus[];
extern const u8 Cry_Axew[];
extern const u8 Cry_Bergmite[];
extern const u8 Cry_Copperajah[];
extern const u8 Cry_Marowak[];
extern const u8 Cry_Xerneas[];
extern const u8 Cry_Anorith[];
extern const u8 Cry_Combee[];
extern const u8 Cry_Octillery[];
extern const u8 Cry_Kricketune[];
extern const u8 Cry_LucarioMega[];
extern const u8 Cry_Rattata[];
extern const u8 Cry_GyaradosMega[];
extern const u8 Cry_Servine[];
extern const u8 Cry_Bouffalant[];
extern const u8 Cry_Blipbug[];
extern const u8 Cry_Sandaconda[];
extern const u8 Cry_Hitmontop[];
extern const u8 Cry_GalladeMega[];
extern const u8 Cry_Panpour[];
extern const u8 Cry_Kommoo[];
extern const u8 Cry_Lugia[];
extern const u8 Cry_Cacnea[];
extern const u8 Cry_Alomomola[];
extern const u8 Cry_Arctovish[];
extern const u8 Cry_Grubbin[];
extern const u8 Cry_Charizard[];
extern const u8 Cry_MedichamMega[];
extern const u8 Cry_Bronzor[];
extern const u8 Cry_Sharpedo[];
extern const u8 Cry_Lopunny[];
extern const u8 Cry_Medicham[];
extern const u8 Cry_Torterra[];
extern const u8 Cry_Audino[];
extern const u8 Cry_Spiritomb[];
extern const u8 Cry_Salamence[];
extern const u8 Cry_Tornadus[];
extern const u8 Cry_Honedge[];
extern const u8 Cry_Magneton[];
extern const u8 Cry_Linoone[];
extern const u8 Cry_Flareon[];
extern const u8 Cry_Ledyba[];
extern const u8 Cry_Eevee[];
extern const u8 Cry_Dewott[];
extern const u8 Cry_HoopaUnbound[];
extern const u8 Cry_Guzzlord[];
extern const u8 Cry_Araquanid[];
extern const u8 Cry_Numel[];
extern const u8 Cry_Mightyena[];
extern const u8 Cry_Slowbro[];
extern const u8 Cry_Zoroark[];
extern const u8 Cry_Growlithe[];
extern const u8 Cry_Boldore[];
extern const u8 Cry_Krabby[];
extern const u8 Cry_Togepi[];
extern const u8 Cry_Zygarde[];
extern const u8 Cry_Luxio[];
extern const u8 Cry_Staravia[];
extern const u8 Cry_NidoranF[];
extern const u8 Cry_Klinklang[];
extern const u8 Cry_Tauros[];
extern const u8 Cry_Skiddo[];
extern const u8 Cry_Amoonguss[];
extern const u8 Cry_Luvdisc[];
extern const u8 Cry_Girafarig[];
extern const u8 Cry_Magby[];
extern const u8 Cry_Froakie[];
extern const u8 Cry_Raboot[];
extern const u8 Cry_Whimsicott[];
extern const u8 Cry_AggronMega[];
extern const u8 Cry_Perrserker[];
extern const u8 Cry_Honchkrow[];
extern const u8 Cry_Metapod[];
extern const u8 Cry_Drapion[];
extern const u8 Cry_Cofagrigus[];
extern const u8 Cry_Wobbuffet[];
extern const u8 Cry_Persian[];
extern const u8 Cry_Stonjourner[];
extern const u8 Cry_ScizorMega[];
extern const u8 Cry_Escavalier[];
extern const u8 Cry_Eldegoss[];
extern const u8 Cry_Solgaleo[];
extern const u8 Cry_Zamazenta[];
extern const u8 Cry_PinsirMega[];
extern const u8 Cry_Archen[];
extern const u8 Cry_Blitzle[];
extern const u8 Cry_GardevoirMega[];
extern const u8 Cry_Zubat[];
extern const u8 Cry_Finneon[];
extern const u8 Cry_Cinccino[];
extern const u8 Cry_Rookidee[];
extern const u8 Cry_Phanpy[];
extern const u8 Cry_Solrock[];
extern const u8 Cry_Armaldo[];
extern const u8 Cry_Noivern[];
extern const u8 Cry_Skrelp[];
extern const u8 Cry_Illumise[];
extern const u8 Cry_Zangoose[];
extern const u8 Cry_Electrode[];
extern const u8 Cry_Mantine[];
extern const u8 Cry_Bellossom[];
extern const u8 Cry_Parasect[];
extern const u8 Cry_Wynaut[];
extern const u8 Cry_Vulpix[];
extern const u8 Cry_Azurill[];
extern const u8 Cry_Golbat[];
extern const u8 Cry_Oricorio[];
extern const u8 Cry_IndeedeeFemale[];
extern const u8 Cry_Dedenne[];
extern const u8 Cry_Meditite[];
extern const u8 Cry_Zorua[];
extern const u8 Cry_Lumineon[];
extern const u8 Cry_Quagsire[];
extern const u8 Cry_Bisharp[];
extern const u8 Cry_Litwick[];
extern const u8 Cry_Polteageist[];
extern const u8 Cry_Buizel[];
extern const u8 Cry_Forretress[];
extern const u8 Cry_Mismagius[];
extern const u8 Cry_Dartrix[];
extern const u8 Cry_Probopass[];
extern const u8 Cry_Dusclops[];
extern const u8 Cry_Sliggoo[];
extern const u8 Cry_Cosmog[];
extern const u8 Cry_Petilil[];
extern const u8 Cry_Watchog[];
extern const u8 Cry_Volbeat[];
extern const u8 Cry_Glameow[];
extern const u8 Cry_Lickilicky[];
extern const u8 Cry_Goodra[];
extern const u8 Cry_Seismitoad[];
extern const u8 Cry_Kadabra[];
extern const u8 Cry_Breloom[];
extern const u8 Cry_Palossand[];
extern const u8 Cry_Dhelmise[];
extern const u8 Cry_Sealeo[];
extern const u8 Cry_Serperior[];
extern const u8 Cry_Espurr[];
extern const u8 Cry_Weedle[];
extern const u8 Cry_Ferrothorn[];
extern const u8 Cry_Dragalge[];
extern const u8 Cry_Meltan[];
extern const u8 Cry_Ekans[];
extern const u8 Cry_Magmar[];
extern const u8 Cry_Tentacruel[];
extern const u8 Cry_Swadloon[];
extern const u8 Cry_Loudred[];
extern const u8 Cry_Yanma[];
extern const u8 Cry_Torchic[];
extern const u8 Cry_Starly[];
extern const u8 Cry_Regidrago[];
extern const u8 Cry_Magnezone[];
extern const u8 Cry_Frogadier[];
extern const u8 Cry_Heracross[];
extern const u8 Cry_Shieldon[];
extern const u8 Cry_TypeNull[];
extern const u8 Cry_Seviper[];
extern const u8 Cry_Silvally[];
extern const u8 Cry_Leavanny[];
extern const u8 Cry_Dragapult[];
extern const u8 Cry_Fraxure[];
extern const u8 Cry_Togedemaru[];
extern const u8 Cry_Sinistea[];
extern const u8 Cry_Necrozma[];
extern const u8 Cry_Grimer[];
extern const u8 Cry_Muk[];
extern const u8 Cry_Flygon[];
extern const u8 Cry_CameruptMega[];
extern const u8 Cry_Pidgey[];
extern const u8 Cry_Eternatus[];
extern const u8 Cry_Lurantis[];
extern const u8 Cry_Sceptile[];
extern const u8 Cry_EternatusEternamax[];
extern const u8 Cry_Braviary[];
extern const u8 Cry_Sentret[];
extern const u8 Cry_Joltik[];
extern const u8 Cry_Ursaring[];
extern const u8 Cry_MrRime[];
extern const u8 Cry_Sandslash[];
extern const u8 Cry_ManectricMega[];
extern const u8 Cry_Victini[];
extern const u8 Cry_Sewaddle[];
extern const u8 Cry_NecrozmaUltra[];
extern const u8 Cry_Tsareena[];
extern const u8 Cry_Spearow[];
extern const u8 Cry_KyuremWhite[];
extern const u8 Cry_Mothim[];
extern const u8 Cry_Munna[];
extern const u8 Cry_Skiploom[];
extern const u8 Cry_Tyrogue[];
extern const u8 Cry_Koffing[];
extern const u8 Cry_CharizardMegaX[];
extern const u8 Cry_Mudkip[];
extern const u8 Cry_PorygonZ[];
extern const u8 Cry_Ducklett[];
extern const u8 Cry_Cosmoem[];
extern const u8 Cry_AbomasnowMega[];
extern const u8 Cry_HeracrossMega[];
extern const u8 Cry_Hippowdon[];
extern const u8 Cry_Magearna[];
extern const u8 Cry_Infernape[];
extern const u8 Cry_TapuLele[];
extern const u8 Cry_Yamask[];
extern const u8 Cry_Whirlipede[];
extern const u8 Cry_Frosmoth[];
extern const u8 Cry_Nidoking[];
extern const u8 Cry_Pidgeot[];
extern const u8 Cry_Lairon[];
extern const u8 Cry_Kyurem[];
extern const u8 Cry_Bayleef[];
extern const u8 Cry_Beedrill[];
extern const u8 Cry_Weezing[];
extern const u8 Cry_Snorunt[];
extern const u8 Cry_Chesnaught[];
extern const u8 Cry_Salandit[];
extern const u8 Cry_Zeraora[];
extern const u8 Cry_Porygon2[];
extern const u8 Cry_GourgeistSuper[];
extern const u8 Cry_Mantyke[];
extern const u8 Cry_Keldeo[];
extern const u8 Cry_Togekiss[];
extern const u8 Cry_Kirlia[];
extern const u8 Cry_Roggenrola[];
extern const u8 Cry_Poliwrath[];
extern const u8 Cry_Bonsly[];
extern const u8 Cry_Magnemite[];
extern const u8 Cry_Piloswine[];
extern const u8 Cry_Maractus[];
extern const u8 Cry_Blissey[];
extern const u8 Cry_Yveltal[];
extern const u8 Cry_Clamperl[];
extern const u8 Cry_EiscueNoiceFace[];
extern const u8 Cry_Slowpoke[];
extern const u8 Cry_Cryogonal[];
extern const u8 Cry_Machoke[];
extern const u8 Cry_Purrloin[];
extern const u8 Cry_Beheeyem[];
extern const u8 Cry_Sawsbuck[];
extern const u8 Cry_Starmie[];
extern const u8 Cry_Purugly[];
extern const u8 Cry_Sizzlipede[];
extern const u8 Cry_Elekid[];
extern const u8 Cry_Herdier[];
extern const u8 Cry_Scyther[];
extern const u8 Cry_Chespin[];
extern const u8 Cry_Passimian[];
extern const u8 Cry_Electrike[];
extern const u8 Cry_Tranquill[];
extern const u8 Cry_Wishiwashi[];
extern const u8 Cry_GengarMega[];
extern const u8 Cry_Shiinotic[];
extern const u8 Cry_Lickitung[];
extern const u8 Cry_Munchlax[];
extern const u8 Cry_Cramorant[];
extern const u8 Cry_Lapras[];
extern const u8 Cry_Bellsprout[];
extern const u8 Cry_Grapploct[];
extern const u8 Cry_Ralts[];
extern const u8 Cry_Furfrou[];
extern const u8 Cry_Diancie[];
extern const u8 Cry_Comfey[];
extern const u8 Cry_Skuntank[];
extern const u8 Cry_Kyogre[];
extern const u8 Cry_MetagrossMega[];
extern const u8 Cry_Golisopod[];
extern const u8 Cry_Carvanha[];
extern const u8 Cry_Crustle[];
extern const u8 Cry_Tropius[];
extern const u8 Cry_Drilbur[];
extern const u8 Cry_Falinks[];
extern const u8 Cry_Miltank[];
extern const u8 Cry_Lunatone[];
extern const u8 Cry_Rotom[];
extern const u8 Cry_Nosepass[];
extern const u8 Cry_Thwackey[];
extern const u8 Cry_Drednaw[];
extern const u8 Cry_Jangmoo[];
extern const u8 Cry_Virizion[];
extern const u8 Cry_Vivillon[];
extern const u8 Cry_Scatterbug[];
extern const u8 Cry_Cubchoo[];
extern const u8 Cry_Ariados[];
extern const u8 Cry_Toucannon[];
extern const u8 Cry_Shinx[];
extern const u8 Cry_Golurk[];
extern const u8 Cry_Heatran[];
extern const u8 Cry_Coalossal[];
extern const u8 Cry_Clefable[];
extern const u8 Cry_Pumpkaboo[];
extern const u8 Cry_Beldum[];
extern const u8 Cry_Jolteon[];
extern const u8 Cry_Karrablast[];
extern const u8 Cry_Sunkern[];
extern const u8 Cry_Pawniard[];
extern const u8 Cry_TyranitarMega[];
extern const u8 Cry_Pansage[];
extern const u8 Cry_Chandelure[];
extern const u8 Cry_Metang[];
extern const u8 Cry_Rhydon[];
extern const u8 Cry_Pidgeotto[];
extern const u8 Cry_Darmanitan[];
extern const u8 Cry_Snom[];
extern const u8 Cry_CalyrexShadowRider[];
extern const u8 Cry_Cottonee[];
extern const u8 Cry_Sigilyph[];
extern const u8 Cry_Tentacool[];
extern const u8 Cry_Huntail[];
extern const u8 Cry_Trevenant[];
extern const u8 Cry_Brionne[];
extern const u8 Cry_Zigzagoon[];
extern const u8 Cry_Abomasnow[];
extern const u8 Cry_Mudsdale[];
extern const u8 Cry_Celebi[];
extern const u8 Cry_Stantler[];
extern const u8 Cry_Pangoro[];
extern const u8 Cry_Hypno[];
extern const u8 Cry_Trumbeak[];
extern const u8 Cry_TapuFini[];
extern const u8 Cry_Regigigas[];
extern const u8 Cry_Applin[];
extern const u8 Cry_Jigglypuff[];
extern const u8 Cry_Gabite[];
extern const u8 Cry_Dreepy[];
extern const u8 Cry_TapuKoko[];
extern const u8 Cry_Electabuzz[];
extern const u8 Cry_Pinsir[];
extern const u8 Cry_Komala[];
extern const u8 Cry_Kabutops[];
extern const u8 Cry_Cherrim[];
extern const u8 Cry_Articuno[];
extern const u8 Cry_Zarude[];
extern const u8 Cry_UrshifuRapidStrikeStyle[];
extern const u8 Cry_Swellow[];
extern const u8 Cry_Empoleon[];
extern const u8 Cry_Dusknoir[];
extern const u8 Cry_Caterpie[];
extern const u8 Cry_Cubone[];
extern const u8 Cry_Remoraid[];
extern const u8 Cry_Pelipper[];
extern const u8 Cry_Simisage[];
extern const u8 Cry_Cradily[];
extern const u8 Cry_Arbok[];
extern const u8 Cry_Froslass[];
extern const u8 Cry_Darumaka[];
extern const u8 Cry_Cranidos[];
extern const u8 Cry_Deoxys[];
extern const u8 Cry_Klang[];
extern const u8 Cry_Steelix[];
extern const u8 Cry_Lampent[];
extern const u8 Cry_Yungoos[];
extern const u8 Cry_Barboach[];
extern const u8 Cry_Jirachi[];
extern const u8 Cry_Inteleon[];
extern const u8 Cry_Glastrier[];
extern const u8 Cry_BlastoiseMega[];
extern const u8 Cry_Samurott[];
extern const u8 Cry_Electivire[];
extern const u8 Cry_Altaria[];
extern const u8 Cry_Mesprit[];
extern const u8 Cry_Scizor[];
extern const u8 Cry_Fletchinder[];
extern const u8 Cry_Gogoat[];
extern const u8 Cry_Silcoon[];
extern const u8 Cry_Ludicolo[];
extern const u8 Cry_Sandile[];
extern const u8 Cry_Throh[];
extern const u8 Cry_Rayquaza[];
extern const u8 Cry_Hawlucha[];
extern const u8 Cry_Morpeko[];
extern const u8 Cry_Venonat[];
extern const u8 Cry_Oddish[];
extern const u8 Cry_Jynx[];
extern const u8 Cry_Cascoon[];
extern const u8 Cry_Gurdurr[];
extern const u8 Cry_Crobat[];
extern const u8 Cry_Surskit[];
extern const u8 Cry_Squirtle[];
extern const u8 Cry_Gible[];
extern const u8 Cry_Trubbish[];
extern const u8 Cry_Crabrawler[];
extern const u8 Cry_Marshtomp[];
extern const u8 Cry_Duraludon[];
extern const u8 Cry_Shuckle[];
extern const u8 Cry_BanetteMega[];
extern const u8 Cry_Calyrex[];
extern const u8 Cry_Reuniclus[];
extern const u8 Cry_Cufant[];
extern const u8 Cry_Graveler[];
extern const u8 Cry_Totodile[];
extern const u8 Cry_Makuhita[];
extern const u8 Cry_Dewgong[];
extern const u8 Cry_Conkeldurr[];
extern const u8 Cry_Wailord[];
extern const u8 Cry_Primarina[];
extern const u8 Cry_Marill[];
extern const u8 Cry_Xurkitree[];
extern const u8 Cry_Boltund[];
extern const u8 Cry_Milcery[];
extern const u8 Cry_Obstagoon[];
extern const u8 Cry_Pyroar[];
extern const u8 Cry_Pancham[];
extern const u8 Cry_Clefairy[];
extern const u8 Cry_Entei[];
extern const u8 Cry_Lotad[];
extern const u8 Cry_Patrat[];
extern const u8 Cry_Amaura[];
extern const u8 Cry_Machamp[];
extern const u8 Cry_Seel[];
extern const u8 Cry_Feraligatr[];
extern const u8 Cry_Uxie[];
extern const u8 Cry_Liepard[];
extern const u8 Cry_Floette[];
extern const u8 Cry_Suicune[];
extern const u8 Cry_Cherubi[];
extern const u8 Cry_Sawk[];
extern const u8 Cry_Swampert[];
extern const u8 Cry_Chatot[];
extern const u8 Cry_OricorioSensu[];
extern const u8 Cry_Lombre[];
extern const u8 Cry_Krookodile[];
extern const u8 Cry_Baltoy[];
extern const u8 Cry_KangaskhanMega[];
extern const u8 Cry_Furret[];
extern const u8 Cry_Frillish[];
extern const u8 Cry_Onix[];
extern const u8 Cry_Seadra[];
extern const u8 Cry_Taillow[];
extern const u8 Cry_Hariyama[];
extern const u8 Cry_Leafeon[];
extern const u8 Cry_Snivy[];
extern const u8 Cry_Golett[];
extern const u8 Cry_Flapple[];
extern const u8 Cry_SableyeMega[];
extern const u8 Cry_Ledian[];
extern const u8 Cry_Fearow[];
extern const u8 Cry_Absol[];
extern const u8 Cry_Oranguru[];
extern const u8 Cry_Nincada[];
extern const u8 Cry_Hoothoot[];
extern const u8 Cry_SceptileMega[];
extern const u8 Cry_Gumshoos[];
extern const u8 Cry_Corphish[];
extern const u8 Cry_Wingull[];
extern const u8 Cry_Nuzleaf[];
extern const u8 Cry_Qwilfish[];
extern const u8 Cry_Accelgor[];
extern const u8 Cry_Chingling[];
extern const u8 Cry_Carkol[];
extern const u8 Cry_Vileplume[];
extern const u8 Cry_Bunnelby[];
extern const u8 Cry_MawileMega[];
extern const u8 Cry_Fomantis[];
extern const u8 Cry_Chikorita[];
extern const u8 Cry_Steenee[];
extern const u8 Cry_Mienshao[];
extern const u8 Cry_Murkrow[];
extern const u8 Cry_Abra[];
extern const u8 Cry_Nidorina[];
extern const u8 Cry_Durant[];
extern const u8 Cry_Raikou[];
extern const u8 Cry_Shuppet[];
extern const u8 Cry_Castform[];
extern const u8 Cry_Foongus[];
extern const u8 Cry_Mewtwo[];
extern const u8 Cry_Impidimp[];
extern const u8 Cry_Rillaboom[];
extern const u8 Cry_Grimmsnarl[];
extern const u8 Cry_Gardevoir[];
extern const u8 Cry_Rockruff[];
extern const u8 Cry_Grotle[];
extern const u8 Cry_Gulpin[];
extern const u8 Cry_Togetic[];
extern const u8 Cry_Heatmor[];
extern const u8 Cry_Tyrunt[];
extern const u8 Cry_Wimpod[];
extern const u8 Cry_Nickit[];
extern const u8 Cry_Slakoth[];
extern const u8 Cry_Snubbull[];
extern const u8 Cry_Kubfu[];
extern const u8 Cry_Luxray[];
extern const u8 Cry_Wigglytuff[];
extern const u8 Cry_FloetteEternalFlower[];
extern const u8 Cry_Krokorok[];
extern const u8 Cry_SwampertMega[];
extern const u8 Cry_Horsea[];
extern const u8 Cry_Camerupt[];
extern const u8 Cry_Cobalion[];
extern const u8 Cry_Raticate[];
extern const u8 Cry_Spinda[];
extern const u8 Cry_Shelmet[];
extern const u8 Cry_Popplio[];
extern const u8 Cry_Avalugg[];
extern const u8 Cry_Charjabug[];
extern const u8 Cry_Dratini[];
extern const u8 Cry_KyogrePrimal[];
extern const u8 Cry_Dodrio[];
extern const u8 Cry_Cacturne[];
extern const u8 Cry_Prinplup[];
extern const u8 Cry_Sableye[];
extern const u8 Cry_Spectrier[];
extern const u8 Cry_Igglybuff[];
extern const u8 Cry_Shellos[];
extern const u8 Cry_Aurorus[];
extern const u8 Cry_Emolga[];
extern const u8 Cry_Alakazam[];
extern const u8 Cry_AudinoMega[];
extern const u8 Cry_Lanturn[];
extern const u8 Cry_Spritzee[];
extern const u8 Cry_Venusaur[];
extern const u8 Cry_Marshadow[];
extern const u8 Cry_Delphox[];
extern const u8 Cry_Ponyta[];
extern const u8 Cry_Hattrem[];
extern const u8 Cry_Inkay[];
extern const u8 Cry_Rolycoly[];
extern const u8 Cry_Swoobat[];
extern const u8 Cry_Mareanie[];
extern const u8 Cry_Kingler[];
extern const u8 Cry_Corsola[];
extern const u8 Cry_Drifloon[];
extern const u8 Cry_Wurmple[];
extern const u8 Cry_Swanna[];
extern const u8 Cry_Gothita[];
extern const u8 Cry_Voltorb[];
extern const u8 Cry_Pikachu[];
extern const u8 Cry_Gloom[];
extern const u8 Cry_Paras[];
extern const u8 Cry_Dracovish[];
extern const u8 Cry_Appletun[];
extern const u8 Cry_Wormadam[];
extern const u8 Cry_Hydreigon[];
extern const u8 Cry_Hatterene[];
extern const u8 Cry_Orbeetle[];
extern const u8 Cry_Zacian[];
extern const u8 Cry_Venipede[];
extern const u8 Cry_Regieleki[];
extern const u8 Cry_Corvisquire[];
extern const u8 Cry_Slurpuff[];
extern const u8 Cry_Zebstrika[];
extern const u8 Cry_Primeape[];
extern const u8 Cry_Vespiquen[];
extern const u8 Cry_Teddiursa[];
extern const u8 Cry_Braixen[];
extern const u8 Cry_Regice[];
extern const u8 Cry_Duosion[];
extern const u8 Cry_Spewpa[];
extern const u8 Cry_Shedinja[];
extern const u8 Cry_Reshiram[];
extern const u8 Cry_Regirock[];
extern const u8 Cry_Stoutland[];
extern const u8 Cry_Farfetchd[];
extern const u8 Cry_Tyrantrum[];
extern const u8 Cry_Piplup[];
extern const u8 Cry_Clauncher[];
extern const u8 Cry_Shellder[];
extern const u8 Cry_Ferroseed[];
extern const u8 Cry_Dunsparce[];
extern const u8 Cry_Pachirisu[];
extern const u8 Cry_Porygon[];
extern const u8 Cry_Natu[];
extern const u8 Cry_Quilladin[];
extern const u8 Cry_Eiscue[];
extern const u8 Cry_Diglett[];
extern const u8 Cry_LatiasMega[];
extern const u8 Cry_Tynamo[];
extern const u8 Cry_DiancieMega[];
extern const u8 Cry_Basculin[];
extern const u8 Cry_Diggersby[];
extern const u8 Cry_Goldeen[];
extern const u8 Cry_Phantump[];
extern const u8 Cry_Doduo[];
extern const u8 Cry_Pyukumuku[];
extern const u8 Cry_Morgrem[];
extern const u8 Cry_Indeedee[];
extern const u8 Cry_Cutiefly[];
extern const u8 Cry_Plusle[];
extern const u8 Cry_Buneary[];
extern const u8 Cry_Clobbopus[];
extern const u8 Cry_Hoppip[];
extern const u8 Cry_Dialga[];
extern const u8 Cry_Shiftry[];
extern const u8 Cry_Morelull[];
extern const u8 Cry_CalyrexIceRider[];
extern const u8 Cry_Gengar[];
extern const u8 Cry_Mienfoo[];
extern const u8 Cry_Tyranitar[];
extern const u8 Cry_GarchompMega[];
extern const u8 Cry_Hippopotas[];
extern const u8 Cry_Tepig[];
extern const u8 Cry_SlowbroMega[];
extern const u8 Cry_SteelixMega[];
extern const u8 Cry_Dottler[];
extern const u8 Cry_Dragonite[];
extern const u8 Cry_LatiosMega[];
extern const u8 Cry_Shaymin[];
extern const u8 Cry_Eelektrik[];
extern const u8 Cry_Swinub[];
extern const u8 Cry_Gliscor[];
extern const u8 Cry_Mankey[];
extern const u8 Cry_Bounsweet[];
extern const u8 Cry_VenusaurMega[];
extern const u8 Cry_Landorus[];
extern const u8 Cry_Donphan[];
extern const u8 Cry_Staraptor[];
extern const u8 Cry_Torracat[];
extern const u8 Cry_Meowth[];
extern const u8 Cry_Mudbray[];
extern const u8 Cry_ToxtricityLowKey[];
extern const u8 Cry_Clawitzer[];
extern const u8 Cry_Roserade[];
extern const u8 Cry_ThundurusTherian[];
extern const u8 Cry_MrMime[];
extern const u8 Cry_Carbink[];
extern const u8 Cry_Weepinbell[];
extern const u8 Cry_Musharna[];
extern const u8 Cry_Salazzle[];
extern const u8 Cry_Weavile[];
extern const u8 Cry_Larvesta[];
extern const u8 Cry_Rufflet[];
extern const u8 Cry_Gothitelle[];
extern const u8 Cry_Dubwool[];
extern const u8 Cry_Sudowoodo[];
extern const u8 Cry_Delibird[];
extern const u8 Cry_Turtwig[];
extern const u8 Cry_Registeel[];
extern const u8 Cry_Chinchou[];
extern const u8 Cry_Skorupi[];
extern const u8 Cry_Volcarona[];
extern const u8 Cry_Noibat[];
extern const u8 Cry_Litten[];
extern const u8 Cry_Archeops[];
extern const u8 Cry_MewtwoMegaX[];
extern const u8 Cry_Skitty[];
extern const u8 Cry_Manectric[];
extern const u8 Cry_Fletchling[];
extern const u8 Cry_Gyarados[];
extern const u8 Cry_Flaaffy[];
extern const u8 Cry_AerodactylMega[];
extern const u8 Cry_Poochyena[];
extern const u8 Cry_Metagross[];
extern const u8 Cry_Galvantula[];
extern const u8 Cry_Lileep[];
extern const u8 Cry_Exeggcute[];
extern const u8 Cry_Binacle[];
extern const u8 Cry_Aipom[];
extern const u8 Cry_Decidueye[];
extern const u8 Cry_Aron[];
extern const u8 Cry_Sylveon[];
extern const u8 Cry_Lycanroc[];
extern const u8 Cry_Greedent[];
extern const u8 Cry_Victreebel[];
extern const u8 Cry_Zygarde10[];
extern const u8 Cry_ZygardeComplete[];
extern const u8 Cry_Spinarak[];
extern const u8 Cry_Jumpluff[];
extern const u8 Cry_Crawdaunt[];
extern const u8 Cry_WishiwashiSchool[];
extern const u8 Cry_Spoink[];
extern const u8 Cry_Rhyperior[];
extern const u8 Cry_Glaceon[];
extern const u8 Cry_Swalot[];
extern const u8 Cry_Dwebble[];
extern const u8 Cry_Butterfree[];
extern const u8 Cry_Litleo[];
extern const u8 Cry_Incineroar[];
extern const u8 Cry_Vikavolt[];
extern const u8 Cry_Mimikyu[];
extern const u8 Cry_Buzzwole[];
extern const u8 Cry_Skwovet[];
extern const u8 Cry_Bibarel[];
extern const u8 Cry_Corviknight[];
extern const u8 Cry_Aegislash[];
extern const u8 Cry_Unfezant[];
extern const u8 Cry_LycanrocMidnight[];
extern const u8 Cry_Tangela[];
extern const u8 Cry_Meowstic[];
extern const u8 Cry_Dustox[];
extern const u8 Cry_Wooloo[];
extern const u8 Cry_Pupitar[];
extern const u8 Cry_Espeon[];
extern const u8 Cry_Wailmer[];
extern const u8 Cry_Dragonair[];
extern const u8 Cry_Mawile[];
extern const u8 Cry_Relicanth[];
extern const u8 Cry_Hakamoo[];
extern const u8 Cry_Rowlet[];
extern const u8 Cry_Budew[];
extern const u8 Cry_Croconaw[];
extern const u8 Cry_Cresselia[];
extern const u8 Cry_Solosis[];
extern const u8 Cry_Geodude[];
extern const u8 Cry_Arrokuda[];
extern const u8 Cry_AltariaMega[];
extern const u8 Cry_Lucario[];
extern const u8 Cry_Stunky[];
extern const u8 Cry_Terrakion[];
extern const u8 Cry_Poliwag[];
extern const u8 Cry_Toxtricity[];
extern const u8 Cry_Goomy[];
extern const u8 Cry_Blaziken[];
extern const u8 Cry_Seedot[];
extern const u8 Cry_Centiskorch[];
extern const u8 Cry_Granbull[];
extern const u8 Cry_AmpharosMega[];
extern const u8 Cry_Thievul[];
extern const u8 Cry_Walrein[];
extern const u8 Cry_GroudonPrimal[];
extern const u8 Cry_LandorusTherian[];
extern const u8 Cry_Unown[];
extern const u8 Cry_Ditto[];
extern const u8 Cry_Garbodor[];
extern const u8 Cry_Tympole[];
extern const u8 Cry_Arcanine[];
extern const u8 Cry_Rampardos[];
extern const u8 Cry_Drizzile[];
extern const u8 Cry_Phione[];
extern const u8 Cry_Tangrowth[];
extern const u8 Cry_Mamoswine[];
extern const u8 Cry_Palpitoad[];
extern const u8 Cry_Gourgeist[];
extern const u8 Cry_Cinderace[];
extern const u8 Cry_Milotic[];
extern const u8 Cry_Shroomish[];
extern const u8 Cry_Zweilous[];
extern const u8 Cry_Psyduck[];
extern const u8 Cry_Magcargo[];
extern const u8 Cry_Carnivine[];
extern const u8 Cry_Vigoroth[];
extern const u8 Cry_Smeargle[];
extern const u8 Cry_Turtonator[];
extern const u8 Cry_Venomoth[];
extern const u8 Cry_Azumarill[];
extern const u8 Cry_Oshawott[];
extern const u8 Cry_Arctozolt[];
extern const u8 Cry_Minccino[];
extern const u8 Cry_Melmetal[];
extern const u8 Cry_Meganium[];
extern const u8 Cry_Sandygast[];
extern const u8 Cry_Meloetta[];
extern const u8 Cry_Greninja[];
extern const u8 Cry_Excadrill[];
extern const u8 Cry_Gossifleur[];
extern const u8 Cry_Ninjask[];
extern const u8 Cry_Bagon[];
extern const u8 Cry_Gastrodon[];
extern const u8 Cry_Magmortar[];
extern const u8 Cry_Darkrai[];
extern const u8 Cry_Palkia[];
extern const u8 Cry_Slaking[];
extern const u8 Cry_Ambipom[];
extern const u8 Cry_OricorioPau[];
extern const u8 Cry_Typhlosion[];
extern const u8 Cry_Roselia[];
extern const u8 Cry_Misdreavus[];
extern const u8 Cry_Volcanion[];
extern const u8 Cry_Sirfetchd[];
extern const u8 Cry_SlowpokeGalarian[];
extern const u8 Cry_ZacianCrownedSword[];
extern const u8 Cry_TapuBulu[];
extern const u8 Cry_Toxicroak[];
extern const u8 Cry_Scrafty[];
extern const u8 Cry_Nidorino[];
extern const u8 Cry_Eelektross[];
extern const u8 Cry_Wartortle[];
extern const u8 Cry_Pineco[];
extern const u8 Cry_Vullaby[];
extern const u8 Cry_Scorbunny[];
extern const u8 Cry_Burmy[];
extern const u8 Cry_Deino[];
extern const u8 Cry_PidgeotMega[];
extern const u8 Cry_MorpekoHangry[];
extern const u8 Cry_Helioptile[];
extern const u8 Cry_ZamazentaCrownedShield[];
extern const u8 Cry_Grumpig[];
extern const u8 Cry_KyuremBlack[];
extern const u8 Cry_Drampa[];
extern const u8 Cry_Crabominable[];
extern const u8 Cry_Blastoise[];
extern const u8 Cry_Thundurus[];
extern const u8 Cry_Larvitar[];
extern const u8 Cry_Slugma[];
extern const u8 Cry_Exploud[];
extern const u8 Cry_Blacephalon[];
extern const u8 Cry_Rhyhorn[];
extern const u8 Cry_Poliwhirl[];
extern const u8 Cry_Kabuto[];
extern const u8 Cry_Yanmega[];
extern const u8 Cry_Toxapex[];
extern const u8 Cry_BlazikenMega[];
extern const u8 Cry_Nidoqueen[];
extern const u8 Cry_Urshifu[];
extern const u8 Cry_MimeJr[];
extern const u8 Cry_Cursola[];
extern const u8 Cry_Quilava[];
extern const u8 Cry_Kakuna[];
extern const u8 Cry_Mandibuzz[];
extern const u8 Cry_Vanillish[];
extern const u8 Cry_Silicobra[];
extern const u8 Cry_Simipour[];
extern const u8 Cry_Swablu[];
extern const u8 Cry_Genesect[];
extern const u8 Cry_Politoed[];
extern const u8 Cry_Vaporeon[];
extern const u8 Cry_Nihilego[];
extern const u8 Cry_Grookey[];
extern const u8 Cry_Pansear[];
extern const u8 Cry_AlakazamMega[];
extern const u8 Cry_Ribombee[];

const struct crytable gCryTable[] =
{
[SPECIES_BULBASAUR] = cry(Cry_Bulbasaur),
[SPECIES_IVYSAUR] = cry(Cry_Ivysaur),
[SPECIES_VENUSAUR] = cry(Cry_Venusaur),
[SPECIES_CHARMANDER] = cry(Cry_Charmander),
[SPECIES_CHARMELEON] = cry(Cry_Charmeleon),
[SPECIES_CHARIZARD] = cry(Cry_Charizard),
[SPECIES_SQUIRTLE] = cry(Cry_Squirtle),
[SPECIES_WARTORTLE] = cry(Cry_Wartortle),
[SPECIES_BLASTOISE] = cry(Cry_Blastoise),
[SPECIES_CATERPIE] = cry(Cry_Caterpie),
[SPECIES_METAPOD] = cry(Cry_Metapod),
[SPECIES_BUTTERFREE] = cry(Cry_Butterfree),
[SPECIES_WEEDLE] = cry(Cry_Weedle),
[SPECIES_KAKUNA] = cry(Cry_Kakuna),
[SPECIES_BEEDRILL] = cry(Cry_Beedrill),
[SPECIES_PIDGEY] = cry(Cry_Pidgey),
[SPECIES_PIDGEOTTO] = cry(Cry_Pidgeotto),
[SPECIES_PIDGEOT] = cry(Cry_Pidgeot),
[SPECIES_RATTATA] = cry(Cry_Rattata),
[SPECIES_RATICATE] = cry(Cry_Raticate),
[SPECIES_SPEAROW] = cry(Cry_Spearow),
[SPECIES_FEAROW] = cry(Cry_Fearow),
[SPECIES_EKANS] = cry(Cry_Ekans),
[SPECIES_ARBOK] = cry(Cry_Arbok),
[SPECIES_PIKACHU] = cry(Cry_Pikachu),
[SPECIES_RAICHU] = cry(Cry_Raichu),
[SPECIES_SANDSHREW] = cry(Cry_Sandshrew),
[SPECIES_SANDSLASH] = cry(Cry_Sandslash),
[SPECIES_NIDORAN_F] = cry(Cry_NidoranF),
[SPECIES_NIDORINA] = cry(Cry_Nidorina),
[SPECIES_NIDOQUEEN] = cry(Cry_Nidoqueen),
[SPECIES_NIDORAN_M] = cry(Cry_NidoranM),
[SPECIES_NIDORINO] = cry(Cry_Nidorino),
[SPECIES_NIDOKING] = cry(Cry_Nidoking),
[SPECIES_CLEFAIRY] = cry(Cry_Clefairy),
[SPECIES_CLEFABLE] = cry(Cry_Clefable),
[SPECIES_VULPIX] = cry(Cry_Vulpix),
[SPECIES_NINETALES] = cry(Cry_Ninetales),
[SPECIES_JIGGLYPUFF] = cry(Cry_Jigglypuff),
[SPECIES_WIGGLYTUFF] = cry(Cry_Wigglytuff),
[SPECIES_ZUBAT] = cry(Cry_Zubat),
[SPECIES_GOLBAT] = cry(Cry_Golbat),
[SPECIES_ODDISH] = cry(Cry_Oddish),
[SPECIES_GLOOM] = cry(Cry_Gloom),
[SPECIES_VILEPLUME] = cry(Cry_Vileplume),
[SPECIES_PARAS] = cry(Cry_Paras),
[SPECIES_PARASECT] = cry(Cry_Parasect),
[SPECIES_VENONAT] = cry(Cry_Venonat),
[SPECIES_VENOMOTH] = cry(Cry_Venomoth),
[SPECIES_DIGLETT] = cry(Cry_Diglett),
[SPECIES_DUGTRIO] = cry(Cry_Dugtrio),
[SPECIES_MEOWTH] = cry(Cry_Meowth),
[SPECIES_PERSIAN] = cry(Cry_Persian),
[SPECIES_PSYDUCK] = cry(Cry_Psyduck),
[SPECIES_GOLDUCK] = cry(Cry_Golduck),
[SPECIES_MANKEY] = cry(Cry_Mankey),
[SPECIES_PRIMEAPE] = cry(Cry_Primeape),
[SPECIES_GROWLITHE] = cry(Cry_Growlithe),
[SPECIES_ARCANINE] = cry(Cry_Arcanine),
[SPECIES_POLIWAG] = cry(Cry_Poliwag),
[SPECIES_POLIWHIRL] = cry(Cry_Poliwhirl),
[SPECIES_POLIWRATH] = cry(Cry_Poliwrath),
[SPECIES_ABRA] = cry(Cry_Abra),
[SPECIES_KADABRA] = cry(Cry_Kadabra),
[SPECIES_ALAKAZAM] = cry(Cry_Alakazam),
[SPECIES_MACHOP] = cry(Cry_Machop),
[SPECIES_MACHOKE] = cry(Cry_Machoke),
[SPECIES_MACHAMP] = cry(Cry_Machamp),
[SPECIES_BELLSPROUT] = cry(Cry_Bellsprout),
[SPECIES_WEEPINBELL] = cry(Cry_Weepinbell),
[SPECIES_VICTREEBEL] = cry(Cry_Victreebel),
[SPECIES_TENTACOOL] = cry(Cry_Tentacool),
[SPECIES_TENTACRUEL] = cry(Cry_Tentacruel),
[SPECIES_GEODUDE] = cry(Cry_Geodude),
[SPECIES_GRAVELER] = cry(Cry_Graveler),
[SPECIES_GOLEM] = cry(Cry_Golem),
[SPECIES_PONYTA] = cry(Cry_Ponyta),
[SPECIES_RAPIDASH] = cry(Cry_Rapidash),
[SPECIES_SLOWPOKE] = cry(Cry_Slowpoke),
[SPECIES_SLOWBRO] = cry(Cry_Slowbro),
[SPECIES_MAGNEMITE] = cry(Cry_Magnemite),
[SPECIES_MAGNETON] = cry(Cry_Magneton),
[SPECIES_FARFETCHD] = cry(Cry_Farfetchd),
[SPECIES_DODUO] = cry(Cry_Doduo),
[SPECIES_DODRIO] = cry(Cry_Dodrio),
[SPECIES_SEEL] = cry(Cry_Seel),
[SPECIES_DEWGONG] = cry(Cry_Dewgong),
[SPECIES_GRIMER] = cry(Cry_Grimer),
[SPECIES_MUK] = cry(Cry_Muk),
[SPECIES_SHELLDER] = cry(Cry_Shellder),
[SPECIES_CLOYSTER] = cry(Cry_Cloyster),
[SPECIES_GASTLY] = cry(Cry_Gastly),
[SPECIES_HAUNTER] = cry(Cry_Haunter),
[SPECIES_GENGAR] = cry(Cry_Gengar),
[SPECIES_ONIX] = cry(Cry_Onix),
[SPECIES_DROWZEE] = cry(Cry_Drowzee),
[SPECIES_HYPNO] = cry(Cry_Hypno),
[SPECIES_KRABBY] = cry(Cry_Krabby),
[SPECIES_KINGLER] = cry(Cry_Kingler),
[SPECIES_VOLTORB] = cry(Cry_Voltorb),
[SPECIES_ELECTRODE] = cry(Cry_Electrode),
[SPECIES_EXEGGCUTE] = cry(Cry_Exeggcute),
[SPECIES_EXEGGUTOR] = cry(Cry_Exeggutor),
[SPECIES_CUBONE] = cry(Cry_Cubone),
[SPECIES_MAROWAK] = cry(Cry_Marowak),
[SPECIES_HITMONLEE] = cry(Cry_Hitmonlee),
[SPECIES_HITMONCHAN] = cry(Cry_Hitmonchan),
[SPECIES_LICKITUNG] = cry(Cry_Lickitung),
[SPECIES_KOFFING] = cry(Cry_Koffing),
[SPECIES_WEEZING] = cry(Cry_Weezing),
[SPECIES_RHYHORN] = cry(Cry_Rhyhorn),
[SPECIES_RHYDON] = cry(Cry_Rhydon),
[SPECIES_CHANSEY] = cry(Cry_Chansey),
[SPECIES_TANGELA] = cry(Cry_Tangela),
[SPECIES_KANGASKHAN] = cry(Cry_Kangaskhan),
[SPECIES_HORSEA] = cry(Cry_Horsea),
[SPECIES_SEADRA] = cry(Cry_Seadra),
[SPECIES_GOLDEEN] = cry(Cry_Goldeen),
[SPECIES_SEAKING] = cry(Cry_Seaking),
[SPECIES_STARYU] = cry(Cry_Staryu),
[SPECIES_STARMIE] = cry(Cry_Starmie),
[SPECIES_MR_MIME] = cry(Cry_MrMime),
[SPECIES_SCYTHER] = cry(Cry_Scyther),
[SPECIES_JYNX] = cry(Cry_Jynx),
[SPECIES_ELECTABUZZ] = cry(Cry_Electabuzz),
[SPECIES_MAGMAR] = cry(Cry_Magmar),
[SPECIES_PINSIR] = cry(Cry_Pinsir),
[SPECIES_TAUROS] = cry(Cry_Tauros),
[SPECIES_MAGIKARP] = cry(Cry_Magikarp),
[SPECIES_GYARADOS] = cry(Cry_Gyarados),
[SPECIES_LAPRAS] = cry(Cry_Lapras),
[SPECIES_DITTO] = cry(Cry_Ditto),
[SPECIES_EEVEE] = cry(Cry_Eevee),
[SPECIES_VAPOREON] = cry(Cry_Vaporeon),
[SPECIES_JOLTEON] = cry(Cry_Jolteon),
[SPECIES_FLAREON] = cry(Cry_Flareon),
[SPECIES_PORYGON] = cry(Cry_Porygon),
[SPECIES_OMANYTE] = cry(Cry_Omanyte),
[SPECIES_OMASTAR] = cry(Cry_Omastar),
[SPECIES_KABUTO] = cry(Cry_Kabuto),
[SPECIES_KABUTOPS] = cry(Cry_Kabutops),
[SPECIES_AERODACTYL] = cry(Cry_Aerodactyl),
[SPECIES_SNORLAX] = cry(Cry_Snorlax),
[SPECIES_ARTICUNO] = cry(Cry_Articuno),
[SPECIES_ZAPDOS] = cry(Cry_Zapdos),
[SPECIES_MOLTRES] = cry(Cry_Moltres),
[SPECIES_DRATINI] = cry(Cry_Dratini),
[SPECIES_DRAGONAIR] = cry(Cry_Dragonair),
[SPECIES_DRAGONITE] = cry(Cry_Dragonite),
[SPECIES_MEWTWO] = cry(Cry_Mewtwo),
[SPECIES_MEW] = cry(Cry_Mew),
[SPECIES_CHIKORITA] = cry(Cry_Chikorita),
[SPECIES_BAYLEEF] = cry(Cry_Bayleef),
[SPECIES_MEGANIUM] = cry(Cry_Meganium),
[SPECIES_CYNDAQUIL] = cry(Cry_Cyndaquil),
[SPECIES_QUILAVA] = cry(Cry_Quilava),
[SPECIES_TYPHLOSION] = cry(Cry_Typhlosion),
[SPECIES_TOTODILE] = cry(Cry_Totodile),
[SPECIES_CROCONAW] = cry(Cry_Croconaw),
[SPECIES_FERALIGATR] = cry(Cry_Feraligatr),
[SPECIES_SENTRET] = cry(Cry_Sentret),
[SPECIES_FURRET] = cry(Cry_Furret),
[SPECIES_HOOTHOOT] = cry(Cry_Hoothoot),
[SPECIES_NOCTOWL] = cry(Cry_Noctowl),
[SPECIES_LEDYBA] = cry(Cry_Ledyba),
[SPECIES_LEDIAN] = cry(Cry_Ledian),
[SPECIES_SPINARAK] = cry(Cry_Spinarak),
[SPECIES_ARIADOS] = cry(Cry_Ariados),
[SPECIES_CROBAT] = cry(Cry_Crobat),
[SPECIES_CHINCHOU] = cry(Cry_Chinchou),
[SPECIES_LANTURN] = cry(Cry_Lanturn),
[SPECIES_PICHU] = cry(Cry_Pichu),
[SPECIES_CLEFFA] = cry(Cry_Cleffa),
[SPECIES_IGGLYBUFF] = cry(Cry_Igglybuff),
[SPECIES_TOGEPI] = cry(Cry_Togepi),
[SPECIES_TOGETIC] = cry(Cry_Togetic),
[SPECIES_NATU] = cry(Cry_Natu),
[SPECIES_XATU] = cry(Cry_Xatu),
[SPECIES_MAREEP] = cry(Cry_Mareep),
[SPECIES_FLAAFFY] = cry(Cry_Flaaffy),
[SPECIES_AMPHAROS] = cry(Cry_Ampharos),
[SPECIES_BELLOSSOM] = cry(Cry_Bellossom),
[SPECIES_MARILL] = cry(Cry_Marill),
[SPECIES_AZUMARILL] = cry(Cry_Azumarill),
[SPECIES_SUDOWOODO] = cry(Cry_Sudowoodo),
[SPECIES_POLITOED] = cry(Cry_Politoed),
[SPECIES_HOPPIP] = cry(Cry_Hoppip),
[SPECIES_SKIPLOOM] = cry(Cry_Skiploom),
[SPECIES_JUMPLUFF] = cry(Cry_Jumpluff),
[SPECIES_AIPOM] = cry(Cry_Aipom),
[SPECIES_SUNKERN] = cry(Cry_Sunkern),
[SPECIES_SUNFLORA] = cry(Cry_Sunflora),
[SPECIES_YANMA] = cry(Cry_Yanma),
[SPECIES_WOOPER] = cry(Cry_Wooper),
[SPECIES_QUAGSIRE] = cry(Cry_Quagsire),
[SPECIES_ESPEON] = cry(Cry_Espeon),
[SPECIES_UMBREON] = cry(Cry_Umbreon),
[SPECIES_MURKROW] = cry(Cry_Murkrow),
[SPECIES_SLOWKING] = cry(Cry_Slowking),
[SPECIES_MISDREAVUS] = cry(Cry_Misdreavus),
[SPECIES_UNOWN] = cry(Cry_Unown),
[SPECIES_WOBBUFFET] = cry(Cry_Wobbuffet),
[SPECIES_GIRAFARIG] = cry(Cry_Girafarig),
[SPECIES_PINECO] = cry(Cry_Pineco),
[SPECIES_FORRETRESS] = cry(Cry_Forretress),
[SPECIES_DUNSPARCE] = cry(Cry_Dunsparce),
[SPECIES_GLIGAR] = cry(Cry_Gligar),
[SPECIES_STEELIX] = cry(Cry_Steelix),
[SPECIES_SNUBBULL] = cry(Cry_Snubbull),
[SPECIES_GRANBULL] = cry(Cry_Granbull),
[SPECIES_QWILFISH] = cry(Cry_Qwilfish),
[SPECIES_SCIZOR] = cry(Cry_Scizor),
[SPECIES_SHUCKLE] = cry(Cry_Shuckle),
[SPECIES_HERACROSS] = cry(Cry_Heracross),
[SPECIES_SNEASEL] = cry(Cry_Sneasel),
[SPECIES_TEDDIURSA] = cry(Cry_Teddiursa),
[SPECIES_URSARING] = cry(Cry_Ursaring),
[SPECIES_SLUGMA] = cry(Cry_Slugma),
[SPECIES_MAGCARGO] = cry(Cry_Magcargo),
[SPECIES_SWINUB] = cry(Cry_Swinub),
[SPECIES_PILOSWINE] = cry(Cry_Piloswine),
[SPECIES_CORSOLA] = cry(Cry_Corsola),
[SPECIES_REMORAID] = cry(Cry_Remoraid),
[SPECIES_OCTILLERY] = cry(Cry_Octillery),
[SPECIES_DELIBIRD] = cry(Cry_Delibird),
[SPECIES_MANTINE] = cry(Cry_Mantine),
[SPECIES_SKARMORY] = cry(Cry_Skarmory),
[SPECIES_HOUNDOUR] = cry(Cry_Houndour),
[SPECIES_HOUNDOOM] = cry(Cry_Houndoom),
[SPECIES_KINGDRA] = cry(Cry_Kingdra),
[SPECIES_PHANPY] = cry(Cry_Phanpy),
[SPECIES_DONPHAN] = cry(Cry_Donphan),
[SPECIES_PORYGON2] = cry(Cry_Porygon2),
[SPECIES_STANTLER] = cry(Cry_Stantler),
[SPECIES_SMEARGLE] = cry(Cry_Smeargle),
[SPECIES_TYROGUE] = cry(Cry_Tyrogue),
[SPECIES_HITMONTOP] = cry(Cry_Hitmontop),
[SPECIES_SMOOCHUM] = cry(Cry_Smoochum),
[SPECIES_ELEKID] = cry(Cry_Elekid),
[SPECIES_MAGBY] = cry(Cry_Magby),
[SPECIES_MILTANK] = cry(Cry_Miltank),
[SPECIES_BLISSEY] = cry(Cry_Blissey),
[SPECIES_RAIKOU] = cry(Cry_Raikou),
[SPECIES_ENTEI] = cry(Cry_Entei),
[SPECIES_SUICUNE] = cry(Cry_Suicune),
[SPECIES_LARVITAR] = cry(Cry_Larvitar),
[SPECIES_PUPITAR] = cry(Cry_Pupitar),
[SPECIES_TYRANITAR] = cry(Cry_Tyranitar),
[SPECIES_LUGIA] = cry(Cry_Lugia),
[SPECIES_HO_OH] = cry(Cry_HoOh),
[SPECIES_CELEBI] = cry(Cry_Celebi),
[SPECIES_TREECKO] = cry(Cry_Treecko),
[SPECIES_GROVYLE] = cry(Cry_Grovyle),
[SPECIES_SCEPTILE] = cry(Cry_Sceptile),
[SPECIES_TORCHIC] = cry(Cry_Torchic),
[SPECIES_COMBUSKEN] = cry(Cry_Combusken),
[SPECIES_BLAZIKEN] = cry(Cry_Blaziken),
[SPECIES_MUDKIP] = cry(Cry_Mudkip),
[SPECIES_MARSHTOMP] = cry(Cry_Marshtomp),
[SPECIES_SWAMPERT] = cry(Cry_Swampert),
[SPECIES_POOCHYENA] = cry(Cry_Poochyena),
[SPECIES_MIGHTYENA] = cry(Cry_Mightyena),
[SPECIES_ZIGZAGOON] = cry(Cry_Zigzagoon),
[SPECIES_LINOONE] = cry(Cry_Linoone),
[SPECIES_WURMPLE] = cry(Cry_Wurmple),
[SPECIES_SILCOON] = cry(Cry_Silcoon),
[SPECIES_BEAUTIFLY] = cry(Cry_Beautifly),
[SPECIES_CASCOON] = cry(Cry_Cascoon),
[SPECIES_DUSTOX] = cry(Cry_Dustox),
[SPECIES_LOTAD] = cry(Cry_Lotad),
[SPECIES_LOMBRE] = cry(Cry_Lombre),
[SPECIES_LUDICOLO] = cry(Cry_Ludicolo),
[SPECIES_SEEDOT] = cry(Cry_Seedot),
[SPECIES_NUZLEAF] = cry(Cry_Nuzleaf),
[SPECIES_SHIFTRY] = cry(Cry_Shiftry),
[SPECIES_TAILLOW] = cry(Cry_Taillow),
[SPECIES_SWELLOW] = cry(Cry_Swellow),
[SPECIES_WINGULL] = cry(Cry_Wingull),
[SPECIES_PELIPPER] = cry(Cry_Pelipper),
[SPECIES_RALTS] = cry(Cry_Ralts),
[SPECIES_KIRLIA] = cry(Cry_Kirlia),
[SPECIES_GARDEVOIR] = cry(Cry_Gardevoir),
[SPECIES_SURSKIT] = cry(Cry_Surskit),
[SPECIES_MASQUERAIN] = cry(Cry_Masquerain),
[SPECIES_SHROOMISH] = cry(Cry_Shroomish),
[SPECIES_BRELOOM] = cry(Cry_Breloom),
[SPECIES_SLAKOTH] = cry(Cry_Slakoth),
[SPECIES_VIGOROTH] = cry(Cry_Vigoroth),
[SPECIES_SLAKING] = cry(Cry_Slaking),
[SPECIES_NINCADA] = cry(Cry_Nincada),
[SPECIES_NINJASK] = cry(Cry_Ninjask),
[SPECIES_SHEDINJA] = cry(Cry_Shedinja),
[SPECIES_WHISMUR] = cry(Cry_Whismur),
[SPECIES_LOUDRED] = cry(Cry_Loudred),
[SPECIES_EXPLOUD] = cry(Cry_Exploud),
[SPECIES_MAKUHITA] = cry(Cry_Makuhita),
[SPECIES_HARIYAMA] = cry(Cry_Hariyama),
[SPECIES_AZURILL] = cry(Cry_Azurill),
[SPECIES_NOSEPASS] = cry(Cry_Nosepass),
[SPECIES_SKITTY] = cry(Cry_Skitty),
[SPECIES_DELCATTY] = cry(Cry_Delcatty),
[SPECIES_SABLEYE] = cry(Cry_Sableye),
[SPECIES_MAWILE] = cry(Cry_Mawile),
[SPECIES_ARON] = cry(Cry_Aron),
[SPECIES_LAIRON] = cry(Cry_Lairon),
[SPECIES_AGGRON] = cry(Cry_Aggron),
[SPECIES_MEDITITE] = cry(Cry_Meditite),
[SPECIES_MEDICHAM] = cry(Cry_Medicham),
[SPECIES_ELECTRIKE] = cry(Cry_Electrike),
[SPECIES_MANECTRIC] = cry(Cry_Manectric),
[SPECIES_PLUSLE] = cry(Cry_Plusle),
[SPECIES_MINUN] = cry(Cry_Minun),
[SPECIES_VOLBEAT] = cry(Cry_Volbeat),
[SPECIES_ILLUMISE] = cry(Cry_Illumise),
[SPECIES_ROSELIA] = cry(Cry_Roselia),
[SPECIES_GULPIN] = cry(Cry_Gulpin),
[SPECIES_SWALOT] = cry(Cry_Swalot),
[SPECIES_CARVANHA] = cry(Cry_Carvanha),
[SPECIES_SHARPEDO] = cry(Cry_Sharpedo),
[SPECIES_WAILMER] = cry(Cry_Wailmer),
[SPECIES_WAILORD] = cry(Cry_Wailord),
[SPECIES_NUMEL] = cry(Cry_Numel),
[SPECIES_CAMERUPT] = cry(Cry_Camerupt),
[SPECIES_TORKOAL] = cry(Cry_Torkoal),
[SPECIES_SPOINK] = cry(Cry_Spoink),
[SPECIES_GRUMPIG] = cry(Cry_Grumpig),
[SPECIES_SPINDA] = cry(Cry_Spinda),
[SPECIES_TRAPINCH] = cry(Cry_Trapinch),
[SPECIES_VIBRAVA] = cry(Cry_Vibrava),
[SPECIES_FLYGON] = cry(Cry_Flygon),
[SPECIES_CACNEA] = cry(Cry_Cacnea),
[SPECIES_CACTURNE] = cry(Cry_Cacturne),
[SPECIES_SWABLU] = cry(Cry_Swablu),
[SPECIES_ALTARIA] = cry(Cry_Altaria),
[SPECIES_ZANGOOSE] = cry(Cry_Zangoose),
[SPECIES_SEVIPER] = cry(Cry_Seviper),
[SPECIES_LUNATONE] = cry(Cry_Lunatone),
[SPECIES_SOLROCK] = cry(Cry_Solrock),
[SPECIES_BARBOACH] = cry(Cry_Barboach),
[SPECIES_WHISCASH] = cry(Cry_Whiscash),
[SPECIES_CORPHISH] = cry(Cry_Corphish),
[SPECIES_CRAWDAUNT] = cry(Cry_Crawdaunt),
[SPECIES_BALTOY] = cry(Cry_Baltoy),
[SPECIES_CLAYDOL] = cry(Cry_Claydol),
[SPECIES_LILEEP] = cry(Cry_Lileep),
[SPECIES_CRADILY] = cry(Cry_Cradily),
[SPECIES_ANORITH] = cry(Cry_Anorith),
[SPECIES_ARMALDO] = cry(Cry_Armaldo),
[SPECIES_FEEBAS] = cry(Cry_Feebas),
[SPECIES_MILOTIC] = cry(Cry_Milotic),
[SPECIES_CASTFORM] = cry(Cry_Castform),
[SPECIES_KECLEON] = cry(Cry_Kecleon),
[SPECIES_SHUPPET] = cry(Cry_Shuppet),
[SPECIES_BANETTE] = cry(Cry_Banette),
[SPECIES_DUSKULL] = cry(Cry_Duskull),
[SPECIES_DUSCLOPS] = cry(Cry_Dusclops),
[SPECIES_TROPIUS] = cry(Cry_Tropius),
[SPECIES_CHIMECHO] = cry(Cry_Chimecho),
[SPECIES_ABSOL] = cry(Cry_Absol),
[SPECIES_WYNAUT] = cry(Cry_Wynaut),
[SPECIES_SNORUNT] = cry(Cry_Snorunt),
[SPECIES_GLALIE] = cry(Cry_Glalie),
[SPECIES_SPHEAL] = cry(Cry_Spheal),
[SPECIES_SEALEO] = cry(Cry_Sealeo),
[SPECIES_WALREIN] = cry(Cry_Walrein),
[SPECIES_CLAMPERL] = cry(Cry_Clamperl),
[SPECIES_HUNTAIL] = cry(Cry_Huntail),
[SPECIES_GOREBYSS] = cry(Cry_Gorebyss),
[SPECIES_RELICANTH] = cry(Cry_Relicanth),
[SPECIES_LUVDISC] = cry(Cry_Luvdisc),
[SPECIES_BAGON] = cry(Cry_Bagon),
[SPECIES_SHELGON] = cry(Cry_Shelgon),
[SPECIES_SALAMENCE] = cry(Cry_Salamence),
[SPECIES_BELDUM] = cry(Cry_Beldum),
[SPECIES_METANG] = cry(Cry_Metang),
[SPECIES_METAGROSS] = cry(Cry_Metagross),
[SPECIES_REGIROCK] = cry(Cry_Regirock),
[SPECIES_REGICE] = cry(Cry_Regice),
[SPECIES_REGISTEEL] = cry(Cry_Registeel),
[SPECIES_LATIAS] = cry(Cry_Latias),
[SPECIES_LATIOS] = cry(Cry_Latios),
[SPECIES_KYOGRE] = cry(Cry_Kyogre),
[SPECIES_GROUDON] = cry(Cry_Groudon),
[SPECIES_RAYQUAZA] = cry(Cry_Rayquaza),
[SPECIES_JIRACHI] = cry(Cry_Jirachi),
[SPECIES_DEOXYS] = cry(Cry_Deoxys),
[SPECIES_TURTWIG] = cry(Cry_Turtwig),
[SPECIES_GROTLE] = cry(Cry_Grotle),
[SPECIES_TORTERRA] = cry(Cry_Torterra),
[SPECIES_CHIMCHAR] = cry(Cry_Chimchar),
[SPECIES_MONFERNO] = cry(Cry_Monferno),
[SPECIES_INFERNAPE] = cry(Cry_Infernape),
[SPECIES_PIPLUP] = cry(Cry_Piplup),
[SPECIES_PRINPLUP] = cry(Cry_Prinplup),
[SPECIES_EMPOLEON] = cry(Cry_Empoleon),
[SPECIES_STARLY] = cry(Cry_Starly),
[SPECIES_STARAVIA] = cry(Cry_Staravia),
[SPECIES_STARAPTOR] = cry(Cry_Staraptor),
[SPECIES_BIDOOF] = cry(Cry_Bidoof),
[SPECIES_BIBAREL] = cry(Cry_Bibarel),
[SPECIES_KRICKETOT] = cry(Cry_Kricketot),
[SPECIES_KRICKETUNE] = cry(Cry_Kricketune),
[SPECIES_SHINX] = cry(Cry_Shinx),
[SPECIES_LUXIO] = cry(Cry_Luxio),
[SPECIES_LUXRAY] = cry(Cry_Luxray),
[SPECIES_BUDEW] = cry(Cry_Budew),
[SPECIES_ROSERADE] = cry(Cry_Roserade),
[SPECIES_CRANIDOS] = cry(Cry_Cranidos),
[SPECIES_RAMPARDOS] = cry(Cry_Rampardos),
[SPECIES_SHIELDON] = cry(Cry_Shieldon),
[SPECIES_BASTIODON] = cry(Cry_Bastiodon),
[SPECIES_BURMY] = cry(Cry_Burmy),
[SPECIES_WORMADAM] = cry(Cry_Wormadam),
[SPECIES_MOTHIM] = cry(Cry_Mothim),
[SPECIES_COMBEE] = cry(Cry_Combee),
[SPECIES_VESPIQUEN] = cry(Cry_Vespiquen),
[SPECIES_PACHIRISU] = cry(Cry_Pachirisu),
[SPECIES_BUIZEL] = cry(Cry_Buizel),
[SPECIES_FLOATZEL] = cry(Cry_Floatzel),
[SPECIES_CHERUBI] = cry(Cry_Cherubi),
[SPECIES_CHERRIM] = cry(Cry_Cherrim),
[SPECIES_SHELLOS] = cry(Cry_Shellos),
[SPECIES_GASTRODON] = cry(Cry_Gastrodon),
[SPECIES_AMBIPOM] = cry(Cry_Ambipom),
[SPECIES_DRIFLOON] = cry(Cry_Drifloon),
[SPECIES_DRIFBLIM] = cry(Cry_Drifblim),
[SPECIES_BUNEARY] = cry(Cry_Buneary),
[SPECIES_LOPUNNY] = cry(Cry_Lopunny),
[SPECIES_MISMAGIUS] = cry(Cry_Mismagius),
[SPECIES_HONCHKROW] = cry(Cry_Honchkrow),
[SPECIES_GLAMEOW] = cry(Cry_Glameow),
[SPECIES_PURUGLY] = cry(Cry_Purugly),
[SPECIES_CHINGLING] = cry(Cry_Chingling),
[SPECIES_STUNKY] = cry(Cry_Stunky),
[SPECIES_SKUNTANK] = cry(Cry_Skuntank),
[SPECIES_BRONZOR] = cry(Cry_Bronzor),
[SPECIES_BRONZONG] = cry(Cry_Bronzong),
[SPECIES_BONSLY] = cry(Cry_Bonsly),
[SPECIES_MIME_JR] = cry(Cry_MimeJr),
[SPECIES_HAPPINY] = cry(Cry_Happiny),
[SPECIES_CHATOT] = cry(Cry_Chatot),
[SPECIES_SPIRITOMB] = cry(Cry_Spiritomb),
[SPECIES_GIBLE] = cry(Cry_Gible),
[SPECIES_GABITE] = cry(Cry_Gabite),
[SPECIES_GARCHOMP] = cry(Cry_Garchomp),
[SPECIES_MUNCHLAX] = cry(Cry_Munchlax),
[SPECIES_RIOLU] = cry(Cry_Riolu),
[SPECIES_LUCARIO] = cry(Cry_Lucario),
[SPECIES_HIPPOPOTAS] = cry(Cry_Hippopotas),
[SPECIES_HIPPOWDON] = cry(Cry_Hippowdon),
[SPECIES_SKORUPI] = cry(Cry_Skorupi),
[SPECIES_DRAPION] = cry(Cry_Drapion),
[SPECIES_CROAGUNK] = cry(Cry_Croagunk),
[SPECIES_TOXICROAK] = cry(Cry_Toxicroak),
[SPECIES_CARNIVINE] = cry(Cry_Carnivine),
[SPECIES_FINNEON] = cry(Cry_Finneon),
[SPECIES_LUMINEON] = cry(Cry_Lumineon),
[SPECIES_MANTYKE] = cry(Cry_Mantyke),
[SPECIES_SNOVER] = cry(Cry_Snover),
[SPECIES_ABOMASNOW] = cry(Cry_Abomasnow),
[SPECIES_WEAVILE] = cry(Cry_Weavile),
[SPECIES_MAGNEZONE] = cry(Cry_Magnezone),
[SPECIES_LICKILICKY] = cry(Cry_Lickilicky),
[SPECIES_RHYPERIOR] = cry(Cry_Rhyperior),
[SPECIES_TANGROWTH] = cry(Cry_Tangrowth),
[SPECIES_ELECTIVIRE] = cry(Cry_Electivire),
[SPECIES_MAGMORTAR] = cry(Cry_Magmortar),
[SPECIES_TOGEKISS] = cry(Cry_Togekiss),
[SPECIES_YANMEGA] = cry(Cry_Yanmega),
[SPECIES_LEAFEON] = cry(Cry_Leafeon),
[SPECIES_GLACEON] = cry(Cry_Glaceon),
[SPECIES_GLISCOR] = cry(Cry_Gliscor),
[SPECIES_MAMOSWINE] = cry(Cry_Mamoswine),
[SPECIES_PORYGON_Z] = cry(Cry_PorygonZ),
[SPECIES_GALLADE] = cry(Cry_Gallade),
[SPECIES_PROBOPASS] = cry(Cry_Probopass),
[SPECIES_DUSKNOIR] = cry(Cry_Dusknoir),
[SPECIES_FROSLASS] = cry(Cry_Froslass),
[SPECIES_ROTOM] = cry(Cry_Rotom),
[SPECIES_UXIE] = cry(Cry_Uxie),
[SPECIES_MESPRIT] = cry(Cry_Mesprit),
[SPECIES_AZELF] = cry(Cry_Azelf),
[SPECIES_DIALGA] = cry(Cry_Dialga),
[SPECIES_PALKIA] = cry(Cry_Palkia),
[SPECIES_HEATRAN] = cry(Cry_Heatran),
[SPECIES_REGIGIGAS] = cry(Cry_Regigigas),
[SPECIES_GIRATINA] = cry(Cry_Giratina),
[SPECIES_CRESSELIA] = cry(Cry_Cresselia),
[SPECIES_PHIONE] = cry(Cry_Phione),
[SPECIES_MANAPHY] = cry(Cry_Manaphy),
[SPECIES_DARKRAI] = cry(Cry_Darkrai),
[SPECIES_SHAYMIN] = cry(Cry_Shaymin),
[SPECIES_ARCEUS] = cry(Cry_Arceus),
[SPECIES_VICTINI] = cry(Cry_Victini),
[SPECIES_SNIVY] = cry(Cry_Snivy),
[SPECIES_SERVINE] = cry(Cry_Servine),
[SPECIES_SERPERIOR] = cry(Cry_Serperior),
[SPECIES_TEPIG] = cry(Cry_Tepig),
[SPECIES_PIGNITE] = cry(Cry_Pignite),
[SPECIES_EMBOAR] = cry(Cry_Emboar),
[SPECIES_OSHAWOTT] = cry(Cry_Oshawott),
[SPECIES_DEWOTT] = cry(Cry_Dewott),
[SPECIES_SAMUROTT] = cry(Cry_Samurott),
[SPECIES_PATRAT] = cry(Cry_Patrat),
[SPECIES_WATCHOG] = cry(Cry_Watchog),
[SPECIES_LILLIPUP] = cry(Cry_Lillipup),
[SPECIES_HERDIER] = cry(Cry_Herdier),
[SPECIES_STOUTLAND] = cry(Cry_Stoutland),
[SPECIES_PURRLOIN] = cry(Cry_Purrloin),
[SPECIES_LIEPARD] = cry(Cry_Liepard),
[SPECIES_PANSAGE] = cry(Cry_Pansage),
[SPECIES_SIMISAGE] = cry(Cry_Simisage),
[SPECIES_PANSEAR] = cry(Cry_Pansear),
[SPECIES_SIMISEAR] = cry(Cry_Simisear),
[SPECIES_PANPOUR] = cry(Cry_Panpour),
[SPECIES_SIMIPOUR] = cry(Cry_Simipour),
[SPECIES_MUNNA] = cry(Cry_Munna),
[SPECIES_MUSHARNA] = cry(Cry_Musharna),
[SPECIES_PIDOVE] = cry(Cry_Pidove),
[SPECIES_TRANQUILL] = cry(Cry_Tranquill),
[SPECIES_UNFEZANT] = cry(Cry_Unfezant),
[SPECIES_BLITZLE] = cry(Cry_Blitzle),
[SPECIES_ZEBSTRIKA] = cry(Cry_Zebstrika),
[SPECIES_ROGGENROLA] = cry(Cry_Roggenrola),
[SPECIES_BOLDORE] = cry(Cry_Boldore),
[SPECIES_GIGALITH] = cry(Cry_Gigalith),
[SPECIES_WOOBAT] = cry(Cry_Woobat),
[SPECIES_SWOOBAT] = cry(Cry_Swoobat),
[SPECIES_DRILBUR] = cry(Cry_Drilbur),
[SPECIES_EXCADRILL] = cry(Cry_Excadrill),
[SPECIES_AUDINO] = cry(Cry_Audino),
[SPECIES_TIMBURR] = cry(Cry_Timburr),
[SPECIES_GURDURR] = cry(Cry_Gurdurr),
[SPECIES_CONKELDURR] = cry(Cry_Conkeldurr),
[SPECIES_TYMPOLE] = cry(Cry_Tympole),
[SPECIES_PALPITOAD] = cry(Cry_Palpitoad),
[SPECIES_SEISMITOAD] = cry(Cry_Seismitoad),
[SPECIES_THROH] = cry(Cry_Throh),
[SPECIES_SAWK] = cry(Cry_Sawk),
[SPECIES_SEWADDLE] = cry(Cry_Sewaddle),
[SPECIES_SWADLOON] = cry(Cry_Swadloon),
[SPECIES_LEAVANNY] = cry(Cry_Leavanny),
[SPECIES_VENIPEDE] = cry(Cry_Venipede),
[SPECIES_WHIRLIPEDE] = cry(Cry_Whirlipede),
[SPECIES_SCOLIPEDE] = cry(Cry_Scolipede),
[SPECIES_COTTONEE] = cry(Cry_Cottonee),
[SPECIES_WHIMSICOTT] = cry(Cry_Whimsicott),
[SPECIES_PETILIL] = cry(Cry_Petilil),
[SPECIES_LILLIGANT] = cry(Cry_Lilligant),
[SPECIES_BASCULIN] = cry(Cry_Basculin),
[SPECIES_SANDILE] = cry(Cry_Sandile),
[SPECIES_KROKOROK] = cry(Cry_Krokorok),
[SPECIES_KROOKODILE] = cry(Cry_Krookodile),
[SPECIES_DARUMAKA] = cry(Cry_Darumaka),
[SPECIES_DARMANITAN] = cry(Cry_Darmanitan),
[SPECIES_MARACTUS] = cry(Cry_Maractus),
[SPECIES_DWEBBLE] = cry(Cry_Dwebble),
[SPECIES_CRUSTLE] = cry(Cry_Crustle),
[SPECIES_SCRAGGY] = cry(Cry_Scraggy),
[SPECIES_SCRAFTY] = cry(Cry_Scrafty),
[SPECIES_SIGILYPH] = cry(Cry_Sigilyph),
[SPECIES_YAMASK] = cry(Cry_Yamask),
[SPECIES_COFAGRIGUS] = cry(Cry_Cofagrigus),
[SPECIES_TIRTOUGA] = cry(Cry_Tirtouga),
[SPECIES_CARRACOSTA] = cry(Cry_Carracosta),
[SPECIES_ARCHEN] = cry(Cry_Archen),
[SPECIES_ARCHEOPS] = cry(Cry_Archeops),
[SPECIES_TRUBBISH] = cry(Cry_Trubbish),
[SPECIES_GARBODOR] = cry(Cry_Garbodor),
[SPECIES_ZORUA] = cry(Cry_Zorua),
[SPECIES_ZOROARK] = cry(Cry_Zoroark),
[SPECIES_MINCCINO] = cry(Cry_Minccino),
[SPECIES_CINCCINO] = cry(Cry_Cinccino),
[SPECIES_GOTHITA] = cry(Cry_Gothita),
[SPECIES_GOTHORITA] = cry(Cry_Gothorita),
[SPECIES_GOTHITELLE] = cry(Cry_Gothitelle),
[SPECIES_SOLOSIS] = cry(Cry_Solosis),
[SPECIES_DUOSION] = cry(Cry_Duosion),
[SPECIES_REUNICLUS] = cry(Cry_Reuniclus),
[SPECIES_DUCKLETT] = cry(Cry_Ducklett),
[SPECIES_SWANNA] = cry(Cry_Swanna),
[SPECIES_VANILLITE] = cry(Cry_Vanillite),
[SPECIES_VANILLISH] = cry(Cry_Vanillish),
[SPECIES_VANILLUXE] = cry(Cry_Vanilluxe),
[SPECIES_DEERLING] = cry(Cry_Deerling),
[SPECIES_SAWSBUCK] = cry(Cry_Sawsbuck),
[SPECIES_EMOLGA] = cry(Cry_Emolga),
[SPECIES_KARRABLAST] = cry(Cry_Karrablast),
[SPECIES_ESCAVALIER] = cry(Cry_Escavalier),
[SPECIES_FOONGUS] = cry(Cry_Foongus),
[SPECIES_AMOONGUSS] = cry(Cry_Amoonguss),
[SPECIES_FRILLISH] = cry(Cry_Frillish),
[SPECIES_JELLICENT] = cry(Cry_Jellicent),
[SPECIES_ALOMOMOLA] = cry(Cry_Alomomola),
[SPECIES_JOLTIK] = cry(Cry_Joltik),
[SPECIES_GALVANTULA] = cry(Cry_Galvantula),
[SPECIES_FERROSEED] = cry(Cry_Ferroseed),
[SPECIES_FERROTHORN] = cry(Cry_Ferrothorn),
[SPECIES_KLINK] = cry(Cry_Klink),
[SPECIES_KLANG] = cry(Cry_Klang),
[SPECIES_KLINKLANG] = cry(Cry_Klinklang),
[SPECIES_TYNAMO] = cry(Cry_Tynamo),
[SPECIES_EELEKTRIK] = cry(Cry_Eelektrik),
[SPECIES_EELEKTROSS] = cry(Cry_Eelektross),
[SPECIES_ELGYEM] = cry(Cry_Elgyem),
[SPECIES_BEHEEYEM] = cry(Cry_Beheeyem),
[SPECIES_LITWICK] = cry(Cry_Litwick),
[SPECIES_LAMPENT] = cry(Cry_Lampent),
[SPECIES_CHANDELURE] = cry(Cry_Chandelure),
[SPECIES_AXEW] = cry(Cry_Axew),
[SPECIES_FRAXURE] = cry(Cry_Fraxure),
[SPECIES_HAXORUS] = cry(Cry_Haxorus),
[SPECIES_CUBCHOO] = cry(Cry_Cubchoo),
[SPECIES_BEARTIC] = cry(Cry_Beartic),
[SPECIES_CRYOGONAL] = cry(Cry_Cryogonal),
[SPECIES_SHELMET] = cry(Cry_Shelmet),
[SPECIES_ACCELGOR] = cry(Cry_Accelgor),
[SPECIES_STUNFISK] = cry(Cry_Stunfisk),
[SPECIES_MIENFOO] = cry(Cry_Mienfoo),
[SPECIES_MIENSHAO] = cry(Cry_Mienshao),
[SPECIES_DRUDDIGON] = cry(Cry_Druddigon),
[SPECIES_GOLETT] = cry(Cry_Golett),
[SPECIES_GOLURK] = cry(Cry_Golurk),
[SPECIES_PAWNIARD] = cry(Cry_Pawniard),
[SPECIES_BISHARP] = cry(Cry_Bisharp),
[SPECIES_BOUFFALANT] = cry(Cry_Bouffalant),
[SPECIES_RUFFLET] = cry(Cry_Rufflet),
[SPECIES_BRAVIARY] = cry(Cry_Braviary),
[SPECIES_VULLABY] = cry(Cry_Vullaby),
[SPECIES_MANDIBUZZ] = cry(Cry_Mandibuzz),
[SPECIES_HEATMOR] = cry(Cry_Heatmor),
[SPECIES_DURANT] = cry(Cry_Durant),
[SPECIES_DEINO] = cry(Cry_Deino),
[SPECIES_ZWEILOUS] = cry(Cry_Zweilous),
[SPECIES_HYDREIGON] = cry(Cry_Hydreigon),
[SPECIES_LARVESTA] = cry(Cry_Larvesta),
[SPECIES_VOLCARONA] = cry(Cry_Volcarona),
[SPECIES_COBALION] = cry(Cry_Cobalion),
[SPECIES_TERRAKION] = cry(Cry_Terrakion),
[SPECIES_VIRIZION] = cry(Cry_Virizion),
[SPECIES_TORNADUS] = cry(Cry_Tornadus),
[SPECIES_THUNDURUS] = cry(Cry_Thundurus),
[SPECIES_RESHIRAM] = cry(Cry_Reshiram),
[SPECIES_ZEKROM] = cry(Cry_Zekrom),
[SPECIES_LANDORUS] = cry(Cry_Landorus),
[SPECIES_KYUREM] = cry(Cry_Kyurem),
[SPECIES_KELDEO] = cry(Cry_Keldeo),
[SPECIES_MELOETTA] = cry(Cry_Meloetta),
[SPECIES_GENESECT] = cry(Cry_Genesect),
[SPECIES_CHESPIN] = cry(Cry_Chespin),
[SPECIES_QUILLADIN] = cry(Cry_Quilladin),
[SPECIES_CHESNAUGHT] = cry(Cry_Chesnaught),
[SPECIES_FENNEKIN] = cry(Cry_Fennekin),
[SPECIES_BRAIXEN] = cry(Cry_Braixen),
[SPECIES_DELPHOX] = cry(Cry_Delphox),
[SPECIES_FROAKIE] = cry(Cry_Froakie),
[SPECIES_FROGADIER] = cry(Cry_Frogadier),
[SPECIES_GRENINJA] = cry(Cry_Greninja),
[SPECIES_BUNNELBY] = cry(Cry_Bunnelby),
[SPECIES_DIGGERSBY] = cry(Cry_Diggersby),
[SPECIES_FLETCHLING] = cry(Cry_Fletchling),
[SPECIES_FLETCHINDER] = cry(Cry_Fletchinder),
[SPECIES_TALONFLAME] = cry(Cry_Talonflame),
[SPECIES_SCATTERBUG] = cry(Cry_Scatterbug),
[SPECIES_SPEWPA] = cry(Cry_Spewpa),
[SPECIES_VIVILLON] = cry(Cry_Vivillon),
[SPECIES_LITLEO] = cry(Cry_Litleo),
[SPECIES_PYROAR] = cry(Cry_Pyroar),
[SPECIES_FLABEBE] = cry(Cry_Flabebe),
[SPECIES_FLOETTE] = cry(Cry_Floette),
[SPECIES_FLORGES] = cry(Cry_Florges),
[SPECIES_SKIDDO] = cry(Cry_Skiddo),
[SPECIES_GOGOAT] = cry(Cry_Gogoat),
[SPECIES_PANCHAM] = cry(Cry_Pancham),
[SPECIES_PANGORO] = cry(Cry_Pangoro),
[SPECIES_FURFROU] = cry(Cry_Furfrou),
[SPECIES_ESPURR] = cry(Cry_Espurr),
[SPECIES_MEOWSTIC] = cry(Cry_Meowstic),
[SPECIES_HONEDGE] = cry(Cry_Honedge),
[SPECIES_DOUBLADE] = cry(Cry_Doublade),
[SPECIES_AEGISLASH] = cry(Cry_Aegislash),
[SPECIES_SPRITZEE] = cry(Cry_Spritzee),
[SPECIES_AROMATISSE] = cry(Cry_Aromatisse),
[SPECIES_SWIRLIX] = cry(Cry_Swirlix),
[SPECIES_SLURPUFF] = cry(Cry_Slurpuff),
[SPECIES_INKAY] = cry(Cry_Inkay),
[SPECIES_MALAMAR] = cry(Cry_Malamar),
[SPECIES_BINACLE] = cry(Cry_Binacle),
[SPECIES_BARBARACLE] = cry(Cry_Barbaracle),
[SPECIES_SKRELP] = cry(Cry_Skrelp),
[SPECIES_DRAGALGE] = cry(Cry_Dragalge),
[SPECIES_CLAUNCHER] = cry(Cry_Clauncher),
[SPECIES_CLAWITZER] = cry(Cry_Clawitzer),
[SPECIES_HELIOPTILE] = cry(Cry_Helioptile),
[SPECIES_HELIOLISK] = cry(Cry_Heliolisk),
[SPECIES_TYRUNT] = cry(Cry_Tyrunt),
[SPECIES_TYRANTRUM] = cry(Cry_Tyrantrum),
[SPECIES_AMAURA] = cry(Cry_Amaura),
[SPECIES_AURORUS] = cry(Cry_Aurorus),
[SPECIES_SYLVEON] = cry(Cry_Sylveon),
[SPECIES_HAWLUCHA] = cry(Cry_Hawlucha),
[SPECIES_DEDENNE] = cry(Cry_Dedenne),
[SPECIES_CARBINK] = cry(Cry_Carbink),
[SPECIES_GOOMY] = cry(Cry_Goomy),
[SPECIES_SLIGGOO] = cry(Cry_Sliggoo),
[SPECIES_GOODRA] = cry(Cry_Goodra),
[SPECIES_KLEFKI] = cry(Cry_Bulbasaur),
[SPECIES_PHANTUMP] = cry(Cry_Phantump),
[SPECIES_TREVENANT] = cry(Cry_Trevenant),
[SPECIES_PUMPKABOO] = cry(Cry_Pumpkaboo),
[SPECIES_GOURGEIST] = cry(Cry_Gourgeist),
[SPECIES_BERGMITE] = cry(Cry_Bergmite),
[SPECIES_AVALUGG] = cry(Cry_Avalugg),
[SPECIES_NOIBAT] = cry(Cry_Noibat),
[SPECIES_NOIVERN] = cry(Cry_Noivern),
[SPECIES_XERNEAS] = cry(Cry_Xerneas),
[SPECIES_YVELTAL] = cry(Cry_Yveltal),
[SPECIES_ZYGARDE] = cry(Cry_Zygarde),
[SPECIES_DIANCIE] = cry(Cry_Diancie),
[SPECIES_HOOPA] = cry(Cry_Hoopa),
[SPECIES_VOLCANION] = cry(Cry_Volcanion),
[SPECIES_ROWLET] = cry(Cry_Rowlet),
[SPECIES_DARTRIX] = cry(Cry_Dartrix),
[SPECIES_DECIDUEYE] = cry(Cry_Decidueye),
[SPECIES_LITTEN] = cry(Cry_Litten),
[SPECIES_TORRACAT] = cry(Cry_Torracat),
[SPECIES_INCINEROAR] = cry(Cry_Incineroar),
[SPECIES_POPPLIO] = cry(Cry_Popplio),
[SPECIES_BRIONNE] = cry(Cry_Brionne),
[SPECIES_PRIMARINA] = cry(Cry_Primarina),
[SPECIES_PIKIPEK] = cry(Cry_Pikipek),
[SPECIES_TRUMBEAK] = cry(Cry_Trumbeak),
[SPECIES_TOUCANNON] = cry(Cry_Toucannon),
[SPECIES_YUNGOOS] = cry(Cry_Yungoos),
[SPECIES_GUMSHOOS] = cry(Cry_Gumshoos),
[SPECIES_GRUBBIN] = cry(Cry_Grubbin),
[SPECIES_CHARJABUG] = cry(Cry_Charjabug),
[SPECIES_VIKAVOLT] = cry(Cry_Vikavolt),
[SPECIES_CRABRAWLER] = cry(Cry_Crabrawler),
[SPECIES_CRABOMINABLE] = cry(Cry_Crabominable),
[SPECIES_ORICORIO] = cry(Cry_Oricorio),
[SPECIES_CUTIEFLY] = cry(Cry_Cutiefly),
[SPECIES_RIBOMBEE] = cry(Cry_Ribombee),
[SPECIES_ROCKRUFF] = cry(Cry_Rockruff),
[SPECIES_LYCANROC] = cry(Cry_Lycanroc),
[SPECIES_WISHIWASHI] = cry(Cry_Wishiwashi),
[SPECIES_MAREANIE] = cry(Cry_Mareanie),
[SPECIES_TOXAPEX] = cry(Cry_Toxapex),
[SPECIES_MUDBRAY] = cry(Cry_Mudbray),
[SPECIES_MUDSDALE] = cry(Cry_Mudsdale),
[SPECIES_DEWPIDER] = cry(Cry_Dewpider),
[SPECIES_ARAQUANID] = cry(Cry_Araquanid),
[SPECIES_FOMANTIS] = cry(Cry_Fomantis),
[SPECIES_LURANTIS] = cry(Cry_Lurantis),
[SPECIES_MORELULL] = cry(Cry_Morelull),
[SPECIES_SHIINOTIC] = cry(Cry_Shiinotic),
[SPECIES_SALANDIT] = cry(Cry_Salandit),
[SPECIES_SALAZZLE] = cry(Cry_Salazzle),
[SPECIES_STUFFUL] = cry(Cry_Stufful),
[SPECIES_BEWEAR] = cry(Cry_Bewear),
[SPECIES_BOUNSWEET] = cry(Cry_Bounsweet),
[SPECIES_STEENEE] = cry(Cry_Steenee),
[SPECIES_TSAREENA] = cry(Cry_Tsareena),
[SPECIES_COMFEY] = cry(Cry_Comfey),
[SPECIES_ORANGURU] = cry(Cry_Oranguru),
[SPECIES_PASSIMIAN] = cry(Cry_Passimian),
[SPECIES_WIMPOD] = cry(Cry_Wimpod),
[SPECIES_GOLISOPOD] = cry(Cry_Golisopod),
[SPECIES_SANDYGAST] = cry(Cry_Sandygast),
[SPECIES_PALOSSAND] = cry(Cry_Palossand),
[SPECIES_PYUKUMUKU] = cry(Cry_Pyukumuku),
[SPECIES_TYPE_NULL] = cry(Cry_TypeNull),
[SPECIES_SILVALLY] = cry(Cry_Silvally),
[SPECIES_MINIOR] = cry(Cry_Minior),
[SPECIES_KOMALA] = cry(Cry_Komala),
[SPECIES_TURTONATOR] = cry(Cry_Turtonator),
[SPECIES_TOGEDEMARU] = cry(Cry_Togedemaru),
[SPECIES_MIMIKYU] = cry(Cry_Mimikyu),
[SPECIES_BRUXISH] = cry(Cry_Bruxish),
[SPECIES_DRAMPA] = cry(Cry_Drampa),
[SPECIES_DHELMISE] = cry(Cry_Dhelmise),
[SPECIES_JANGMO_O] = cry(Cry_Jangmoo),
[SPECIES_HAKAMO_O] = cry(Cry_Hakamoo),
[SPECIES_KOMMO_O] = cry(Cry_Kommoo),
[SPECIES_TAPU_KOKO] = cry(Cry_TapuKoko),
[SPECIES_TAPU_LELE] = cry(Cry_TapuLele),
[SPECIES_TAPU_BULU] = cry(Cry_TapuBulu),
[SPECIES_TAPU_FINI] = cry(Cry_TapuFini),
[SPECIES_COSMOG] = cry(Cry_Cosmog),
[SPECIES_COSMOEM] = cry(Cry_Cosmoem),
[SPECIES_SOLGALEO] = cry(Cry_Solgaleo),
[SPECIES_LUNALA] = cry(Cry_Lunala),
[SPECIES_NIHILEGO] = cry(Cry_Nihilego),
[SPECIES_BUZZWOLE] = cry(Cry_Buzzwole),
[SPECIES_PHEROMOSA] = cry(Cry_Pheromosa),
[SPECIES_XURKITREE] = cry(Cry_Xurkitree),
[SPECIES_CELESTEELA] = cry(Cry_Celesteela),
[SPECIES_KARTANA] = cry(Cry_Kartana),
[SPECIES_GUZZLORD] = cry(Cry_Guzzlord),
[SPECIES_NECROZMA] = cry(Cry_Necrozma),
[SPECIES_MAGEARNA] = cry(Cry_Magearna),
[SPECIES_MARSHADOW] = cry(Cry_Marshadow),
[SPECIES_POIPOLE] = cry(Cry_Poipole),
[SPECIES_NAGANADEL] = cry(Cry_Naganadel),
[SPECIES_STAKATAKA] = cry(Cry_Stakataka),
[SPECIES_BLACEPHALON] = cry(Cry_Blacephalon),
[SPECIES_ZERAORA] = cry(Cry_Zeraora),
[SPECIES_MELTAN] = cry(Cry_Meltan),
[SPECIES_MELMETAL] = cry(Cry_Melmetal),
[SPECIES_GROOKEY] = cry(Cry_Grookey),
[SPECIES_THWACKEY] = cry(Cry_Thwackey),
[SPECIES_RILLABOOM] = cry(Cry_Rillaboom),
[SPECIES_SCORBUNNY] = cry(Cry_Scorbunny),
[SPECIES_RABOOT] = cry(Cry_Raboot),
[SPECIES_CINDERACE] = cry(Cry_Cinderace),
[SPECIES_SOBBLE] = cry(Cry_Sobble),
[SPECIES_DRIZZILE] = cry(Cry_Drizzile),
[SPECIES_INTELEON] = cry(Cry_Inteleon),
[SPECIES_SKWOVET] = cry(Cry_Skwovet),
[SPECIES_GREEDENT] = cry(Cry_Greedent),
[SPECIES_ROOKIDEE] = cry(Cry_Rookidee),
[SPECIES_CORVISQUIRE] = cry(Cry_Corvisquire),
[SPECIES_CORVIKNIGHT] = cry(Cry_Corviknight),
[SPECIES_BLIPBUG] = cry(Cry_Blipbug),
[SPECIES_DOTTLER] = cry(Cry_Dottler),
[SPECIES_ORBEETLE] = cry(Cry_Orbeetle),
[SPECIES_NICKIT] = cry(Cry_Nickit),
[SPECIES_THIEVUL] = cry(Cry_Thievul),
[SPECIES_GOSSIFLEUR] = cry(Cry_Gossifleur),
[SPECIES_ELDEGOSS] = cry(Cry_Eldegoss),
[SPECIES_WOOLOO] = cry(Cry_Wooloo),
[SPECIES_DUBWOOL] = cry(Cry_Dubwool),
[SPECIES_CHEWTLE] = cry(Cry_Chewtle),
[SPECIES_DREDNAW] = cry(Cry_Drednaw),
[SPECIES_YAMPER] = cry(Cry_Yamper),
[SPECIES_BOLTUND] = cry(Cry_Boltund),
[SPECIES_ROLYCOLY] = cry(Cry_Rolycoly),
[SPECIES_CARKOL] = cry(Cry_Carkol),
[SPECIES_COALOSSAL] = cry(Cry_Coalossal),
[SPECIES_APPLIN] = cry(Cry_Applin),
[SPECIES_FLAPPLE] = cry(Cry_Flapple),
[SPECIES_APPLETUN] = cry(Cry_Appletun),
[SPECIES_SILICOBRA] = cry(Cry_Silicobra),
[SPECIES_SANDACONDA] = cry(Cry_Sandaconda),
[SPECIES_CRAMORANT] = cry(Cry_Cramorant),
[SPECIES_ARROKUDA] = cry(Cry_Arrokuda),
[SPECIES_BARRASKEWDA] = cry(Cry_Barraskewda),
[SPECIES_TOXEL] = cry(Cry_Toxel),
[SPECIES_TOXTRICITY] = cry(Cry_Toxtricity),
[SPECIES_SIZZLIPEDE] = cry(Cry_Sizzlipede),
[SPECIES_CENTISKORCH] = cry(Cry_Centiskorch),
[SPECIES_CLOBBOPUS] = cry(Cry_Clobbopus),
[SPECIES_GRAPPLOCT] = cry(Cry_Grapploct),
[SPECIES_SINISTEA] = cry(Cry_Sinistea),
[SPECIES_POLTEAGEIST] = cry(Cry_Polteageist),
[SPECIES_HATENNA] = cry(Cry_Hatenna),
[SPECIES_HATTREM] = cry(Cry_Hattrem),
[SPECIES_HATTERENE] = cry(Cry_Hatterene),
[SPECIES_IMPIDIMP] = cry(Cry_Impidimp),
[SPECIES_MORGREM] = cry(Cry_Morgrem),
[SPECIES_GRIMMSNARL] = cry(Cry_Grimmsnarl),
[SPECIES_OBSTAGOON] = cry(Cry_Obstagoon),
[SPECIES_PERRSERKER] = cry(Cry_Perrserker),
[SPECIES_CURSOLA] = cry(Cry_Cursola),
[SPECIES_SIRFETCHD] = cry(Cry_Sirfetchd),
[SPECIES_MR_RIME] = cry(Cry_MrRime),
[SPECIES_RUNERIGUS] = cry(Cry_Runerigus),
[SPECIES_MILCERY] = cry(Cry_Milcery),
[SPECIES_ALCREMIE] = cry(Cry_Alcremie),
[SPECIES_FALINKS] = cry(Cry_Falinks),
[SPECIES_PINCURCHIN] = cry(Cry_Pincurchin),
[SPECIES_SNOM] = cry(Cry_Snom),
[SPECIES_FROSMOTH] = cry(Cry_Frosmoth),
[SPECIES_STONJOURNER] = cry(Cry_Stonjourner),
[SPECIES_EISCUE] = cry(Cry_Eiscue),
[SPECIES_INDEEDEE] = cry(Cry_Indeedee),
[SPECIES_MORPEKO] = cry(Cry_Morpeko),
[SPECIES_CUFANT] = cry(Cry_Cufant),
[SPECIES_COPPERAJAH] = cry(Cry_Copperajah),
[SPECIES_DRACOZOLT] = cry(Cry_Dracozolt),
[SPECIES_ARCTOZOLT] = cry(Cry_Arctozolt),
[SPECIES_DRACOVISH] = cry(Cry_Dracovish),
[SPECIES_ARCTOVISH] = cry(Cry_Arctovish),
[SPECIES_DURALUDON] = cry(Cry_Duraludon),
[SPECIES_DREEPY] = cry(Cry_Dreepy),
[SPECIES_DRAKLOAK] = cry(Cry_Drakloak),
[SPECIES_DRAGAPULT] = cry(Cry_Dragapult),
[SPECIES_ZACIAN] = cry(Cry_Zacian),
[SPECIES_ZAMAZENTA] = cry(Cry_Zamazenta),
[SPECIES_ETERNATUS] = cry(Cry_Eternatus),
[SPECIES_KUBFU] = cry(Cry_Kubfu),
[SPECIES_URSHIFU] = cry(Cry_Urshifu),
[SPECIES_ZARUDE] = cry(Cry_Zarude),
[SPECIES_REGIELEKI] = cry(Cry_Regieleki),
[SPECIES_REGIDRAGO] = cry(Cry_Regidrago),
[SPECIES_GLASTRIER] = cry(Cry_Glastrier),
[SPECIES_SPECTRIER] = cry(Cry_Spectrier),
[SPECIES_CALYREX] = cry(Cry_Calyrex),
[SPECIES_VENUSAUR_MEGA] = cry(Cry_VenusaurMega),
[SPECIES_CHARIZARD_MEGA_X] = cry(Cry_CharizardMegaX),
[SPECIES_CHARIZARD_MEGA_Y] = cry(Cry_CharizardMegaY),
[SPECIES_BLASTOISE_MEGA] = cry(Cry_BlastoiseMega),
[SPECIES_BEEDRILL_MEGA] = cry(Cry_BeedrillMega),
[SPECIES_PIDGEOT_MEGA] = cry(Cry_PidgeotMega),
[SPECIES_ALAKAZAM_MEGA] = cry(Cry_AlakazamMega),
[SPECIES_SLOWBRO_MEGA] = cry(Cry_SlowbroMega),
[SPECIES_GENGAR_MEGA] = cry(Cry_GengarMega),
[SPECIES_KANGASKHAN_MEGA] = cry(Cry_KangaskhanMega),
[SPECIES_PINSIR_MEGA] = cry(Cry_PinsirMega),
[SPECIES_GYARADOS_MEGA] = cry(Cry_GyaradosMega),
[SPECIES_AERODACTYL_MEGA] = cry(Cry_AerodactylMega),
[SPECIES_MEWTWO_MEGA_X] = cry(Cry_MewtwoMegaX),
[SPECIES_MEWTWO_MEGA_Y] = cry(Cry_MewtwoMegaY),
[SPECIES_AMPHAROS_MEGA] = cry(Cry_AmpharosMega),
[SPECIES_STEELIX_MEGA] = cry(Cry_SteelixMega),
[SPECIES_SCIZOR_MEGA] = cry(Cry_ScizorMega),
[SPECIES_HERACROSS_MEGA] = cry(Cry_HeracrossMega),
[SPECIES_HOUNDOOM_MEGA] = cry(Cry_HoundoomMega),
[SPECIES_TYRANITAR_MEGA] = cry(Cry_TyranitarMega),
[SPECIES_SCEPTILE_MEGA] = cry(Cry_SceptileMega),
[SPECIES_BLAZIKEN_MEGA] = cry(Cry_BlazikenMega),
[SPECIES_SWAMPERT_MEGA] = cry(Cry_SwampertMega),
[SPECIES_GARDEVOIR_MEGA] = cry(Cry_GardevoirMega),
[SPECIES_SABLEYE_MEGA] = cry(Cry_SableyeMega),
[SPECIES_MAWILE_MEGA] = cry(Cry_MawileMega),
[SPECIES_AGGRON_MEGA] = cry(Cry_AggronMega),
[SPECIES_MEDICHAM_MEGA] = cry(Cry_MedichamMega),
[SPECIES_MANECTRIC_MEGA] = cry(Cry_ManectricMega),
[SPECIES_SHARPEDO_MEGA] = cry(Cry_SharpedoMega),
[SPECIES_CAMERUPT_MEGA] = cry(Cry_CameruptMega),
[SPECIES_ALTARIA_MEGA] = cry(Cry_AltariaMega),
[SPECIES_BANETTE_MEGA] = cry(Cry_BanetteMega),
[SPECIES_ABSOL_MEGA] = cry(Cry_AbsolMega),
[SPECIES_GLALIE_MEGA] = cry(Cry_GlalieMega),
[SPECIES_SALAMENCE_MEGA] = cry(Cry_SalamenceMega),
[SPECIES_METAGROSS_MEGA] = cry(Cry_MetagrossMega),
[SPECIES_LATIAS_MEGA] = cry(Cry_LatiasMega),
[SPECIES_LATIOS_MEGA] = cry(Cry_LatiosMega),
[SPECIES_LOPUNNY_MEGA] = cry(Cry_LopunnyMega),
[SPECIES_GARCHOMP_MEGA] = cry(Cry_GarchompMega),
[SPECIES_LUCARIO_MEGA] = cry(Cry_LucarioMega),
[SPECIES_ABOMASNOW_MEGA] = cry(Cry_AbomasnowMega),
[SPECIES_GALLADE_MEGA] = cry(Cry_GalladeMega),
[SPECIES_AUDINO_MEGA] = cry(Cry_AudinoMega),
[SPECIES_DIANCIE_MEGA] = cry(Cry_DiancieMega),
[SPECIES_RAYQUAZA_MEGA] = cry(Cry_RayquazaMega),
[SPECIES_KYOGRE_PRIMAL] = cry(Cry_KyogrePrimal),
[SPECIES_GROUDON_PRIMAL] = cry(Cry_GroudonPrimal),
[SPECIES_RATTATA_ALOLAN] = cry(Cry_Rattata),
[SPECIES_RATICATE_ALOLAN] = cry(Cry_Raticate),
[SPECIES_RAICHU_ALOLAN] = cry(Cry_Raichu),
[SPECIES_SANDSHREW_ALOLAN] = cry(Cry_Sandshrew),
[SPECIES_SANDSLASH_ALOLAN] = cry(Cry_Sandslash),
[SPECIES_VULPIX_ALOLAN] = cry(Cry_Vulpix),
[SPECIES_NINETALES_ALOLAN] = cry(Cry_Ninetales),
[SPECIES_DIGLETT_ALOLAN] = cry(Cry_Diglett),
[SPECIES_DUGTRIO_ALOLAN] = cry(Cry_Dugtrio),
[SPECIES_MEOWTH_ALOLAN] = cry(Cry_Meowth),
[SPECIES_PERSIAN_ALOLAN] = cry(Cry_Persian),
[SPECIES_GEODUDE_ALOLAN] = cry(Cry_Geodude),
[SPECIES_GRAVELER_ALOLAN] = cry(Cry_Graveler),
[SPECIES_GOLEM_ALOLAN] = cry(Cry_Golem),
[SPECIES_GRIMER_ALOLAN] = cry(Cry_Grimer),
[SPECIES_MUK_ALOLAN] = cry(Cry_Muk),
[SPECIES_EXEGGUTOR_ALOLAN] = cry(Cry_Exeggutor),
[SPECIES_MAROWAK_ALOLAN] = cry(Cry_Marowak),
[SPECIES_MEOWTH_GALARIAN] = cry(Cry_Meowth),
[SPECIES_PONYTA_GALARIAN] = cry(Cry_Ponyta),
[SPECIES_RAPIDASH_GALARIAN] = cry(Cry_Rapidash),
[SPECIES_SLOWPOKE_GALARIAN] = cry(Cry_SlowpokeGalarian),
[SPECIES_SLOWBRO_GALARIAN] = cry(Cry_Slowbro),
[SPECIES_FARFETCHD_GALARIAN] = cry(Cry_Farfetchd),
[SPECIES_WEEZING_GALARIAN] = cry(Cry_Weezing),
[SPECIES_MR_MIME_GALARIAN] = cry(Cry_MrMime),
[SPECIES_ARTICUNO_GALARIAN] = cry(Cry_Articuno),
[SPECIES_ZAPDOS_GALARIAN] = cry(Cry_Zapdos),
[SPECIES_MOLTRES_GALARIAN] = cry(Cry_Moltres),
[SPECIES_SLOWKING_GALARIAN] = cry(Cry_Slowking),
[SPECIES_CORSOLA_GALARIAN] = cry(Cry_Corsola),
[SPECIES_ZIGZAGOON_GALARIAN] = cry(Cry_Zigzagoon),
[SPECIES_LINOONE_GALARIAN] = cry(Cry_Linoone),
[SPECIES_DARUMAKA_GALARIAN] = cry(Cry_Darumaka),
[SPECIES_DARMANITAN_GALARIAN] = cry(Cry_Darmanitan),
[SPECIES_YAMASK_GALARIAN] = cry(Cry_Yamask),
[SPECIES_STUNFISK_GALARIAN] = cry(Cry_Stunfisk),
[SPECIES_PIKACHU_COSPLAY] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_ROCK_STAR] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_BELLE] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_POP_STAR] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_PH_D] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_LIBRE] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_ORIGINAL_CAP] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_HOENN_CAP] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_SINNOH_CAP] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_UNOVA_CAP] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_KALOS_CAP] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_ALOLA_CAP] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_PARTNER_CAP] = cry(Cry_Pikachu),
[SPECIES_PIKACHU_WORLD_CAP] = cry(Cry_Pikachu),
[SPECIES_PICHU_SPIKY_EARED] = cry(Cry_Pichu),
[SPECIES_UNOWN_B] = cry(Cry_Unown),
[SPECIES_UNOWN_C] = cry(Cry_Unown),
[SPECIES_UNOWN_D] = cry(Cry_Unown),
[SPECIES_UNOWN_E] = cry(Cry_Unown),
[SPECIES_UNOWN_F] = cry(Cry_Unown),
[SPECIES_UNOWN_G] = cry(Cry_Unown),
[SPECIES_UNOWN_H] = cry(Cry_Unown),
[SPECIES_UNOWN_I] = cry(Cry_Unown),
[SPECIES_UNOWN_J] = cry(Cry_Unown),
[SPECIES_UNOWN_K] = cry(Cry_Unown),
[SPECIES_UNOWN_L] = cry(Cry_Unown),
[SPECIES_UNOWN_M] = cry(Cry_Unown),
[SPECIES_UNOWN_N] = cry(Cry_Unown),
[SPECIES_UNOWN_O] = cry(Cry_Unown),
[SPECIES_UNOWN_P] = cry(Cry_Unown),
[SPECIES_UNOWN_Q] = cry(Cry_Unown),
[SPECIES_UNOWN_R] = cry(Cry_Unown),
[SPECIES_UNOWN_S] = cry(Cry_Unown),
[SPECIES_UNOWN_T] = cry(Cry_Unown),
[SPECIES_UNOWN_U] = cry(Cry_Unown),
[SPECIES_UNOWN_V] = cry(Cry_Unown),
[SPECIES_UNOWN_W] = cry(Cry_Unown),
[SPECIES_UNOWN_X] = cry(Cry_Unown),
[SPECIES_UNOWN_Y] = cry(Cry_Unown),
[SPECIES_UNOWN_Z] = cry(Cry_Unown),
[SPECIES_UNOWN_EMARK] = cry(Cry_Unown),
[SPECIES_UNOWN_QMARK] = cry(Cry_Unown),
[SPECIES_CASTFORM_SUNNY] = cry(Cry_Castform),
[SPECIES_CASTFORM_RAINY] = cry(Cry_Castform),
[SPECIES_CASTFORM_SNOWY] = cry(Cry_Castform),
[SPECIES_DEOXYS_ATTACK] = cry(Cry_Deoxys),
[SPECIES_DEOXYS_DEFENSE] = cry(Cry_Deoxys),
[SPECIES_DEOXYS_SPEED] = cry(Cry_Deoxys),
[SPECIES_BURMY_SANDY_CLOAK] = cry(Cry_Burmy),
[SPECIES_BURMY_TRASH_CLOAK] = cry(Cry_Burmy),
[SPECIES_WORMADAM_SANDY_CLOAK] = cry(Cry_Wormadam),
[SPECIES_WORMADAM_TRASH_CLOAK] = cry(Cry_Wormadam),
[SPECIES_CHERRIM_SUNSHINE] = cry(Cry_Cherrim),
[SPECIES_SHELLOS_EAST_SEA] = cry(Cry_Shellos),
[SPECIES_GASTRODON_EAST_SEA] = cry(Cry_Gastrodon),
[SPECIES_ROTOM_HEAT] = cry(Cry_Rotom),
[SPECIES_ROTOM_WASH] = cry(Cry_Rotom),
[SPECIES_ROTOM_FROST] = cry(Cry_Rotom),
[SPECIES_ROTOM_FAN] = cry(Cry_Rotom),
[SPECIES_ROTOM_MOW] = cry(Cry_Rotom),
[SPECIES_GIRATINA_ORIGIN] = cry(Cry_Giratina),
[SPECIES_SHAYMIN_SKY] = cry(Cry_ShayminSky),
[SPECIES_ARCEUS_FIGHTING] = cry(Cry_Arceus),
[SPECIES_ARCEUS_FLYING] = cry(Cry_Arceus),
[SPECIES_ARCEUS_POISON] = cry(Cry_Arceus),
[SPECIES_ARCEUS_GROUND] = cry(Cry_Arceus),
[SPECIES_ARCEUS_ROCK] = cry(Cry_Arceus),
[SPECIES_ARCEUS_BUG] = cry(Cry_Arceus),
[SPECIES_ARCEUS_GHOST] = cry(Cry_Arceus),
[SPECIES_ARCEUS_STEEL] = cry(Cry_Arceus),
[SPECIES_ARCEUS_FIRE] = cry(Cry_Arceus),
[SPECIES_ARCEUS_WATER] = cry(Cry_Arceus),
[SPECIES_ARCEUS_GRASS] = cry(Cry_Arceus),
[SPECIES_ARCEUS_ELECTRIC] = cry(Cry_Arceus),
[SPECIES_ARCEUS_PSYCHIC] = cry(Cry_Arceus),
[SPECIES_ARCEUS_ICE] = cry(Cry_Arceus),
[SPECIES_ARCEUS_DRAGON] = cry(Cry_Arceus),
[SPECIES_ARCEUS_DARK] = cry(Cry_Arceus),
[SPECIES_ARCEUS_FAIRY] = cry(Cry_Arceus),
[SPECIES_BASCULIN_BLUE_STRIPED] = cry(Cry_Basculin),
[SPECIES_DARMANITAN_ZEN_MODE] = cry(Cry_Darmanitan),
[SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] = cry(Cry_Darmanitan),
[SPECIES_DEERLING_SUMMER] = cry(Cry_Deerling),
[SPECIES_DEERLING_AUTUMN] = cry(Cry_Deerling),
[SPECIES_DEERLING_WINTER] = cry(Cry_Deerling),
[SPECIES_SAWSBUCK_SUMMER] = cry(Cry_Sawsbuck),
[SPECIES_SAWSBUCK_AUTUMN] = cry(Cry_Sawsbuck),
[SPECIES_SAWSBUCK_WINTER] = cry(Cry_Sawsbuck),
[SPECIES_TORNADUS_THERIAN] = cry(Cry_TornadusTherian),
[SPECIES_THUNDURUS_THERIAN] = cry(Cry_ThundurusTherian),
[SPECIES_LANDORUS_THERIAN] = cry(Cry_LandorusTherian),
[SPECIES_KYUREM_WHITE] = cry(Cry_KyuremWhite),
[SPECIES_KYUREM_BLACK] = cry(Cry_KyuremBlack),
[SPECIES_KELDEO_RESOLUTE] = cry(Cry_Keldeo),
[SPECIES_MELOETTA_PIROUETTE] = cry(Cry_Meloetta),
[SPECIES_GENESECT_DOUSE_DRIVE] = cry(Cry_Genesect),
[SPECIES_GENESECT_SHOCK_DRIVE] = cry(Cry_Genesect),
[SPECIES_GENESECT_BURN_DRIVE] = cry(Cry_Genesect),
[SPECIES_GENESECT_CHILL_DRIVE] = cry(Cry_Genesect),
[SPECIES_GRENINJA_BATTLE_BOND] = cry(Cry_Greninja),
[SPECIES_GRENINJA_ASH] = cry(Cry_Greninja),
[SPECIES_VIVILLON_POLAR] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_TUNDRA] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_CONTINENTAL] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_GARDEN] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_ELEGANT] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_MEADOW] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_MODERN] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_MARINE] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_ARCHIPELAGO] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_HIGH_PLAINS] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_SANDSTORM] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_RIVER] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_MONSOON] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_SAVANNA] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_SUN] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_OCEAN] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_JUNGLE] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_FANCY] = cry(Cry_Vivillon),
[SPECIES_VIVILLON_POKE_BALL] = cry(Cry_Vivillon),
[SPECIES_FLABEBE_YELLOW_FLOWER] = cry(Cry_Flabebe),
[SPECIES_FLABEBE_ORANGE_FLOWER] = cry(Cry_Flabebe),
[SPECIES_FLABEBE_BLUE_FLOWER] = cry(Cry_Flabebe),
[SPECIES_FLABEBE_WHITE_FLOWER] = cry(Cry_Flabebe),
[SPECIES_FLOETTE_YELLOW_FLOWER] = cry(Cry_Floette),
[SPECIES_FLOETTE_ORANGE_FLOWER] = cry(Cry_Floette),
[SPECIES_FLOETTE_BLUE_FLOWER] = cry(Cry_Floette),
[SPECIES_FLOETTE_WHITE_FLOWER] = cry(Cry_Floette),
[SPECIES_FLOETTE_ETERNAL_FLOWER] = cry(Cry_FloetteEternalFlower),
[SPECIES_FLORGES_YELLOW_FLOWER] = cry(Cry_Florges),
[SPECIES_FLORGES_ORANGE_FLOWER] = cry(Cry_Florges),
[SPECIES_FLORGES_BLUE_FLOWER] = cry(Cry_Florges),
[SPECIES_FLORGES_WHITE_FLOWER] = cry(Cry_Florges),
[SPECIES_FURFROU_HEART_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_STAR_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_DIAMOND_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_DEBUTANTE_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_MATRON_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_DANDY_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_LA_REINE_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_KABUKI_TRIM] = cry(Cry_Furfrou),
[SPECIES_FURFROU_PHARAOH_TRIM] = cry(Cry_Furfrou),
[SPECIES_MEOWSTIC_FEMALE] = cry(Cry_Meowstic),
[SPECIES_AEGISLASH_BLADE] = cry(Cry_Aegislash),
[SPECIES_PUMPKABOO_SMALL] = cry(Cry_Pumpkaboo),
[SPECIES_PUMPKABOO_LARGE] = cry(Cry_Pumpkaboo),
[SPECIES_PUMPKABOO_SUPER] = cry(Cry_PumpkabooSuper),
[SPECIES_GOURGEIST_SMALL] = cry(Cry_Gourgeist),
[SPECIES_GOURGEIST_LARGE] = cry(Cry_Gourgeist),
[SPECIES_GOURGEIST_SUPER] = cry(Cry_GourgeistSuper),
[SPECIES_XERNEAS_ACTIVE] = cry(Cry_Xerneas),
[SPECIES_ZYGARDE_10] = cry(Cry_Zygarde10),
[SPECIES_ZYGARDE_10_POWER_CONSTRUCT] = cry(Cry_Zygarde10),
[SPECIES_ZYGARDE_50_POWER_CONSTRUCT] = cry(Cry_Zygarde),
[SPECIES_ZYGARDE_COMPLETE] = cry(Cry_ZygardeComplete),
[SPECIES_HOOPA_UNBOUND] = cry(Cry_HoopaUnbound),
[SPECIES_ORICORIO_POM_POM] = cry(Cry_OricorioPomPom),
[SPECIES_ORICORIO_PAU] = cry(Cry_OricorioPau),
[SPECIES_ORICORIO_SENSU] = cry(Cry_OricorioSensu),
[SPECIES_ROCKRUFF_OWN_TEMPO] = cry(Cry_Rockruff),
[SPECIES_LYCANROC_MIDNIGHT] = cry(Cry_LycanrocMidnight),
[SPECIES_LYCANROC_DUSK] = cry(Cry_LycanrocDusk),
[SPECIES_WISHIWASHI_SCHOOL] = cry(Cry_WishiwashiSchool),
[SPECIES_SILVALLY_FIGHTING] = cry(Cry_Silvally),
[SPECIES_SILVALLY_FLYING] = cry(Cry_Silvally),
[SPECIES_SILVALLY_POISON] = cry(Cry_Silvally),
[SPECIES_SILVALLY_GROUND] = cry(Cry_Silvally),
[SPECIES_SILVALLY_ROCK] = cry(Cry_Silvally),
[SPECIES_SILVALLY_BUG] = cry(Cry_Silvally),
[SPECIES_SILVALLY_GHOST] = cry(Cry_Silvally),
[SPECIES_SILVALLY_STEEL] = cry(Cry_Silvally),
[SPECIES_SILVALLY_FIRE] = cry(Cry_Silvally),
[SPECIES_SILVALLY_WATER] = cry(Cry_Silvally),
[SPECIES_SILVALLY_GRASS] = cry(Cry_Silvally),
[SPECIES_SILVALLY_ELECTRIC] = cry(Cry_Silvally),
[SPECIES_SILVALLY_PSYCHIC] = cry(Cry_Silvally),
[SPECIES_SILVALLY_ICE] = cry(Cry_Silvally),
[SPECIES_SILVALLY_DRAGON] = cry(Cry_Silvally),
[SPECIES_SILVALLY_DARK] = cry(Cry_Silvally),
[SPECIES_SILVALLY_FAIRY] = cry(Cry_Silvally),
[SPECIES_MINIOR_METEOR_ORANGE] = cry(Cry_Minior),
[SPECIES_MINIOR_METEOR_YELLOW] = cry(Cry_Minior),
[SPECIES_MINIOR_METEOR_GREEN] = cry(Cry_Minior),
[SPECIES_MINIOR_METEOR_BLUE] = cry(Cry_Minior),
[SPECIES_MINIOR_METEOR_INDIGO] = cry(Cry_Minior),
[SPECIES_MINIOR_METEOR_VIOLET] = cry(Cry_Minior),
[SPECIES_MINIOR_CORE_RED] = cry(Cry_Minior),
[SPECIES_MINIOR_CORE_ORANGE] = cry(Cry_Minior),
[SPECIES_MINIOR_CORE_YELLOW] = cry(Cry_Minior),
[SPECIES_MINIOR_CORE_GREEN] = cry(Cry_Minior),
[SPECIES_MINIOR_CORE_BLUE] = cry(Cry_Minior),
[SPECIES_MINIOR_CORE_INDIGO] = cry(Cry_Minior),
[SPECIES_MINIOR_CORE_VIOLET] = cry(Cry_Minior),
[SPECIES_MIMIKYU_BUSTED] = cry(Cry_Mimikyu),
[SPECIES_NECROZMA_DUSK_MANE] = cry(Cry_NecrozmaDuskMane),
[SPECIES_NECROZMA_DAWN_WINGS] = cry(Cry_NecrozmaDawnWings),
[SPECIES_NECROZMA_ULTRA] = cry(Cry_NecrozmaUltra),
[SPECIES_MAGEARNA_ORIGINAL_COLOR] = cry(Cry_Magearna),
[SPECIES_CRAMORANT_GULPING] = cry(Cry_Cramorant),
[SPECIES_CRAMORANT_GORGING] = cry(Cry_Cramorant),
[SPECIES_TOXTRICITY_LOW_KEY] = cry(Cry_ToxtricityLowKey),
[SPECIES_SINISTEA_ANTIQUE] = cry(Cry_Sinistea),
[SPECIES_POLTEAGEIST_ANTIQUE] = cry(Cry_Polteageist),
[SPECIES_ALCREMIE_RUBY_CREAM] = cry(Cry_Alcremie),
[SPECIES_ALCREMIE_MATCHA_CREAM] = cry(Cry_Alcremie),
[SPECIES_ALCREMIE_MINT_CREAM] = cry(Cry_Alcremie),
[SPECIES_ALCREMIE_LEMON_CREAM] = cry(Cry_Alcremie),
[SPECIES_ALCREMIE_SALTED_CREAM] = cry(Cry_Alcremie),
[SPECIES_ALCREMIE_RUBY_SWIRL] = cry(Cry_Alcremie),
[SPECIES_ALCREMIE_CARAMEL_SWIRL] = cry(Cry_Alcremie),
[SPECIES_ALCREMIE_RAINBOW_SWIRL] = cry(Cry_Alcremie),
[SPECIES_EISCUE_NOICE_FACE] = cry(Cry_EiscueNoiceFace),
[SPECIES_INDEEDEE_FEMALE] = cry(Cry_IndeedeeFemale),
[SPECIES_MORPEKO_HANGRY] = cry(Cry_MorpekoHangry),
[SPECIES_ZACIAN_CROWNED_SWORD] = cry(Cry_ZacianCrownedSword),
[SPECIES_ZAMAZENTA_CROWNED_SHIELD] = cry(Cry_ZamazentaCrownedShield),
[SPECIES_ETERNATUS_ETERNAMAX] = cry(Cry_EternatusEternamax),
[SPECIES_URSHIFU_RAPID_STRIKE_STYLE] = cry(Cry_UrshifuRapidStrikeStyle),
[SPECIES_ZARUDE_DADA] = cry(Cry_Zarude),
[SPECIES_CALYREX_ICE_RIDER] = cry(Cry_CalyrexIceRider),
[SPECIES_CALYREX_SHADOW_RIDER] = cry(Cry_CalyrexShadowRider),
};

const struct crytable gCryTable_Reverse[] =
{
[SPECIES_BULBASAUR] = cry_reverse(Cry_Bulbasaur),
[SPECIES_IVYSAUR] = cry_reverse(Cry_Ivysaur),
[SPECIES_VENUSAUR] = cry_reverse(Cry_Venusaur),
[SPECIES_CHARMANDER] = cry_reverse(Cry_Charmander),
[SPECIES_CHARMELEON] = cry_reverse(Cry_Charmeleon),
[SPECIES_CHARIZARD] = cry_reverse(Cry_Charizard),
[SPECIES_SQUIRTLE] = cry_reverse(Cry_Squirtle),
[SPECIES_WARTORTLE] = cry_reverse(Cry_Wartortle),
[SPECIES_BLASTOISE] = cry_reverse(Cry_Blastoise),
[SPECIES_CATERPIE] = cry_reverse(Cry_Caterpie),
[SPECIES_METAPOD] = cry_reverse(Cry_Metapod),
[SPECIES_BUTTERFREE] = cry_reverse(Cry_Butterfree),
[SPECIES_WEEDLE] = cry_reverse(Cry_Weedle),
[SPECIES_KAKUNA] = cry_reverse(Cry_Kakuna),
[SPECIES_BEEDRILL] = cry_reverse(Cry_Beedrill),
[SPECIES_PIDGEY] = cry_reverse(Cry_Pidgey),
[SPECIES_PIDGEOTTO] = cry_reverse(Cry_Pidgeotto),
[SPECIES_PIDGEOT] = cry_reverse(Cry_Pidgeot),
[SPECIES_RATTATA] = cry_reverse(Cry_Rattata),
[SPECIES_RATICATE] = cry_reverse(Cry_Raticate),
[SPECIES_SPEAROW] = cry_reverse(Cry_Spearow),
[SPECIES_FEAROW] = cry_reverse(Cry_Fearow),
[SPECIES_EKANS] = cry_reverse(Cry_Ekans),
[SPECIES_ARBOK] = cry_reverse(Cry_Arbok),
[SPECIES_PIKACHU] = cry_reverse(Cry_Pikachu),
[SPECIES_RAICHU] = cry_reverse(Cry_Raichu),
[SPECIES_SANDSHREW] = cry_reverse(Cry_Sandshrew),
[SPECIES_SANDSLASH] = cry_reverse(Cry_Sandslash),
[SPECIES_NIDORAN_F] = cry_reverse(Cry_NidoranF),
[SPECIES_NIDORINA] = cry_reverse(Cry_Nidorina),
[SPECIES_NIDOQUEEN] = cry_reverse(Cry_Nidoqueen),
[SPECIES_NIDORAN_M] = cry_reverse(Cry_NidoranM),
[SPECIES_NIDORINO] = cry_reverse(Cry_Nidorino),
[SPECIES_NIDOKING] = cry_reverse(Cry_Nidoking),
[SPECIES_CLEFAIRY] = cry_reverse(Cry_Clefairy),
[SPECIES_CLEFABLE] = cry_reverse(Cry_Clefable),
[SPECIES_VULPIX] = cry_reverse(Cry_Vulpix),
[SPECIES_NINETALES] = cry_reverse(Cry_Ninetales),
[SPECIES_JIGGLYPUFF] = cry_reverse(Cry_Jigglypuff),
[SPECIES_WIGGLYTUFF] = cry_reverse(Cry_Wigglytuff),
[SPECIES_ZUBAT] = cry_reverse(Cry_Zubat),
[SPECIES_GOLBAT] = cry_reverse(Cry_Golbat),
[SPECIES_ODDISH] = cry_reverse(Cry_Oddish),
[SPECIES_GLOOM] = cry_reverse(Cry_Gloom),
[SPECIES_VILEPLUME] = cry_reverse(Cry_Vileplume),
[SPECIES_PARAS] = cry_reverse(Cry_Paras),
[SPECIES_PARASECT] = cry_reverse(Cry_Parasect),
[SPECIES_VENONAT] = cry_reverse(Cry_Venonat),
[SPECIES_VENOMOTH] = cry_reverse(Cry_Venomoth),
[SPECIES_DIGLETT] = cry_reverse(Cry_Diglett),
[SPECIES_DUGTRIO] = cry_reverse(Cry_Dugtrio),
[SPECIES_MEOWTH] = cry_reverse(Cry_Meowth),
[SPECIES_PERSIAN] = cry_reverse(Cry_Persian),
[SPECIES_PSYDUCK] = cry_reverse(Cry_Psyduck),
[SPECIES_GOLDUCK] = cry_reverse(Cry_Golduck),
[SPECIES_MANKEY] = cry_reverse(Cry_Mankey),
[SPECIES_PRIMEAPE] = cry_reverse(Cry_Primeape),
[SPECIES_GROWLITHE] = cry_reverse(Cry_Growlithe),
[SPECIES_ARCANINE] = cry_reverse(Cry_Arcanine),
[SPECIES_POLIWAG] = cry_reverse(Cry_Poliwag),
[SPECIES_POLIWHIRL] = cry_reverse(Cry_Poliwhirl),
[SPECIES_POLIWRATH] = cry_reverse(Cry_Poliwrath),
[SPECIES_ABRA] = cry_reverse(Cry_Abra),
[SPECIES_KADABRA] = cry_reverse(Cry_Kadabra),
[SPECIES_ALAKAZAM] = cry_reverse(Cry_Alakazam),
[SPECIES_MACHOP] = cry_reverse(Cry_Machop),
[SPECIES_MACHOKE] = cry_reverse(Cry_Machoke),
[SPECIES_MACHAMP] = cry_reverse(Cry_Machamp),
[SPECIES_BELLSPROUT] = cry_reverse(Cry_Bellsprout),
[SPECIES_WEEPINBELL] = cry_reverse(Cry_Weepinbell),
[SPECIES_VICTREEBEL] = cry_reverse(Cry_Victreebel),
[SPECIES_TENTACOOL] = cry_reverse(Cry_Tentacool),
[SPECIES_TENTACRUEL] = cry_reverse(Cry_Tentacruel),
[SPECIES_GEODUDE] = cry_reverse(Cry_Geodude),
[SPECIES_GRAVELER] = cry_reverse(Cry_Graveler),
[SPECIES_GOLEM] = cry_reverse(Cry_Golem),
[SPECIES_PONYTA] = cry_reverse(Cry_Ponyta),
[SPECIES_RAPIDASH] = cry_reverse(Cry_Rapidash),
[SPECIES_SLOWPOKE] = cry_reverse(Cry_Slowpoke),
[SPECIES_SLOWBRO] = cry_reverse(Cry_Slowbro),
[SPECIES_MAGNEMITE] = cry_reverse(Cry_Magnemite),
[SPECIES_MAGNETON] = cry_reverse(Cry_Magneton),
[SPECIES_FARFETCHD] = cry_reverse(Cry_Farfetchd),
[SPECIES_DODUO] = cry_reverse(Cry_Doduo),
[SPECIES_DODRIO] = cry_reverse(Cry_Dodrio),
[SPECIES_SEEL] = cry_reverse(Cry_Seel),
[SPECIES_DEWGONG] = cry_reverse(Cry_Dewgong),
[SPECIES_GRIMER] = cry_reverse(Cry_Grimer),
[SPECIES_MUK] = cry_reverse(Cry_Muk),
[SPECIES_SHELLDER] = cry_reverse(Cry_Shellder),
[SPECIES_CLOYSTER] = cry_reverse(Cry_Cloyster),
[SPECIES_GASTLY] = cry_reverse(Cry_Gastly),
[SPECIES_HAUNTER] = cry_reverse(Cry_Haunter),
[SPECIES_GENGAR] = cry_reverse(Cry_Gengar),
[SPECIES_ONIX] = cry_reverse(Cry_Onix),
[SPECIES_DROWZEE] = cry_reverse(Cry_Drowzee),
[SPECIES_HYPNO] = cry_reverse(Cry_Hypno),
[SPECIES_KRABBY] = cry_reverse(Cry_Krabby),
[SPECIES_KINGLER] = cry_reverse(Cry_Kingler),
[SPECIES_VOLTORB] = cry_reverse(Cry_Voltorb),
[SPECIES_ELECTRODE] = cry_reverse(Cry_Electrode),
[SPECIES_EXEGGCUTE] = cry_reverse(Cry_Exeggcute),
[SPECIES_EXEGGUTOR] = cry_reverse(Cry_Exeggutor),
[SPECIES_CUBONE] = cry_reverse(Cry_Cubone),
[SPECIES_MAROWAK] = cry_reverse(Cry_Marowak),
[SPECIES_HITMONLEE] = cry_reverse(Cry_Hitmonlee),
[SPECIES_HITMONCHAN] = cry_reverse(Cry_Hitmonchan),
[SPECIES_LICKITUNG] = cry_reverse(Cry_Lickitung),
[SPECIES_KOFFING] = cry_reverse(Cry_Koffing),
[SPECIES_WEEZING] = cry_reverse(Cry_Weezing),
[SPECIES_RHYHORN] = cry_reverse(Cry_Rhyhorn),
[SPECIES_RHYDON] = cry_reverse(Cry_Rhydon),
[SPECIES_CHANSEY] = cry_reverse(Cry_Chansey),
[SPECIES_TANGELA] = cry_reverse(Cry_Tangela),
[SPECIES_KANGASKHAN] = cry_reverse(Cry_Kangaskhan),
[SPECIES_HORSEA] = cry_reverse(Cry_Horsea),
[SPECIES_SEADRA] = cry_reverse(Cry_Seadra),
[SPECIES_GOLDEEN] = cry_reverse(Cry_Goldeen),
[SPECIES_SEAKING] = cry_reverse(Cry_Seaking),
[SPECIES_STARYU] = cry_reverse(Cry_Staryu),
[SPECIES_STARMIE] = cry_reverse(Cry_Starmie),
[SPECIES_MR_MIME] = cry_reverse(Cry_MrMime),
[SPECIES_SCYTHER] = cry_reverse(Cry_Scyther),
[SPECIES_JYNX] = cry_reverse(Cry_Jynx),
[SPECIES_ELECTABUZZ] = cry_reverse(Cry_Electabuzz),
[SPECIES_MAGMAR] = cry_reverse(Cry_Magmar),
[SPECIES_PINSIR] = cry_reverse(Cry_Pinsir),
[SPECIES_TAUROS] = cry_reverse(Cry_Tauros),
[SPECIES_MAGIKARP] = cry_reverse(Cry_Magikarp),
[SPECIES_GYARADOS] = cry_reverse(Cry_Gyarados),
[SPECIES_LAPRAS] = cry_reverse(Cry_Lapras),
[SPECIES_DITTO] = cry_reverse(Cry_Ditto),
[SPECIES_EEVEE] = cry_reverse(Cry_Eevee),
[SPECIES_VAPOREON] = cry_reverse(Cry_Vaporeon),
[SPECIES_JOLTEON] = cry_reverse(Cry_Jolteon),
[SPECIES_FLAREON] = cry_reverse(Cry_Flareon),
[SPECIES_PORYGON] = cry_reverse(Cry_Porygon),
[SPECIES_OMANYTE] = cry_reverse(Cry_Omanyte),
[SPECIES_OMASTAR] = cry_reverse(Cry_Omastar),
[SPECIES_KABUTO] = cry_reverse(Cry_Kabuto),
[SPECIES_KABUTOPS] = cry_reverse(Cry_Kabutops),
[SPECIES_AERODACTYL] = cry_reverse(Cry_Aerodactyl),
[SPECIES_SNORLAX] = cry_reverse(Cry_Snorlax),
[SPECIES_ARTICUNO] = cry_reverse(Cry_Articuno),
[SPECIES_ZAPDOS] = cry_reverse(Cry_Zapdos),
[SPECIES_MOLTRES] = cry_reverse(Cry_Moltres),
[SPECIES_DRATINI] = cry_reverse(Cry_Dratini),
[SPECIES_DRAGONAIR] = cry_reverse(Cry_Dragonair),
[SPECIES_DRAGONITE] = cry_reverse(Cry_Dragonite),
[SPECIES_MEWTWO] = cry_reverse(Cry_Mewtwo),
[SPECIES_MEW] = cry_reverse(Cry_Mew),
[SPECIES_CHIKORITA] = cry_reverse(Cry_Chikorita),
[SPECIES_BAYLEEF] = cry_reverse(Cry_Bayleef),
[SPECIES_MEGANIUM] = cry_reverse(Cry_Meganium),
[SPECIES_CYNDAQUIL] = cry_reverse(Cry_Cyndaquil),
[SPECIES_QUILAVA] = cry_reverse(Cry_Quilava),
[SPECIES_TYPHLOSION] = cry_reverse(Cry_Typhlosion),
[SPECIES_TOTODILE] = cry_reverse(Cry_Totodile),
[SPECIES_CROCONAW] = cry_reverse(Cry_Croconaw),
[SPECIES_FERALIGATR] = cry_reverse(Cry_Feraligatr),
[SPECIES_SENTRET] = cry_reverse(Cry_Sentret),
[SPECIES_FURRET] = cry_reverse(Cry_Furret),
[SPECIES_HOOTHOOT] = cry_reverse(Cry_Hoothoot),
[SPECIES_NOCTOWL] = cry_reverse(Cry_Noctowl),
[SPECIES_LEDYBA] = cry_reverse(Cry_Ledyba),
[SPECIES_LEDIAN] = cry_reverse(Cry_Ledian),
[SPECIES_SPINARAK] = cry_reverse(Cry_Spinarak),
[SPECIES_ARIADOS] = cry_reverse(Cry_Ariados),
[SPECIES_CROBAT] = cry_reverse(Cry_Crobat),
[SPECIES_CHINCHOU] = cry_reverse(Cry_Chinchou),
[SPECIES_LANTURN] = cry_reverse(Cry_Lanturn),
[SPECIES_PICHU] = cry_reverse(Cry_Pichu),
[SPECIES_CLEFFA] = cry_reverse(Cry_Cleffa),
[SPECIES_IGGLYBUFF] = cry_reverse(Cry_Igglybuff),
[SPECIES_TOGEPI] = cry_reverse(Cry_Togepi),
[SPECIES_TOGETIC] = cry_reverse(Cry_Togetic),
[SPECIES_NATU] = cry_reverse(Cry_Natu),
[SPECIES_XATU] = cry_reverse(Cry_Xatu),
[SPECIES_MAREEP] = cry_reverse(Cry_Mareep),
[SPECIES_FLAAFFY] = cry_reverse(Cry_Flaaffy),
[SPECIES_AMPHAROS] = cry_reverse(Cry_Ampharos),
[SPECIES_BELLOSSOM] = cry_reverse(Cry_Bellossom),
[SPECIES_MARILL] = cry_reverse(Cry_Marill),
[SPECIES_AZUMARILL] = cry_reverse(Cry_Azumarill),
[SPECIES_SUDOWOODO] = cry_reverse(Cry_Sudowoodo),
[SPECIES_POLITOED] = cry_reverse(Cry_Politoed),
[SPECIES_HOPPIP] = cry_reverse(Cry_Hoppip),
[SPECIES_SKIPLOOM] = cry_reverse(Cry_Skiploom),
[SPECIES_JUMPLUFF] = cry_reverse(Cry_Jumpluff),
[SPECIES_AIPOM] = cry_reverse(Cry_Aipom),
[SPECIES_SUNKERN] = cry_reverse(Cry_Sunkern),
[SPECIES_SUNFLORA] = cry_reverse(Cry_Sunflora),
[SPECIES_YANMA] = cry_reverse(Cry_Yanma),
[SPECIES_WOOPER] = cry_reverse(Cry_Wooper),
[SPECIES_QUAGSIRE] = cry_reverse(Cry_Quagsire),
[SPECIES_ESPEON] = cry_reverse(Cry_Espeon),
[SPECIES_UMBREON] = cry_reverse(Cry_Umbreon),
[SPECIES_MURKROW] = cry_reverse(Cry_Murkrow),
[SPECIES_SLOWKING] = cry_reverse(Cry_Slowking),
[SPECIES_MISDREAVUS] = cry_reverse(Cry_Misdreavus),
[SPECIES_UNOWN] = cry_reverse(Cry_Unown),
[SPECIES_WOBBUFFET] = cry_reverse(Cry_Wobbuffet),
[SPECIES_GIRAFARIG] = cry_reverse(Cry_Girafarig),
[SPECIES_PINECO] = cry_reverse(Cry_Pineco),
[SPECIES_FORRETRESS] = cry_reverse(Cry_Forretress),
[SPECIES_DUNSPARCE] = cry_reverse(Cry_Dunsparce),
[SPECIES_GLIGAR] = cry_reverse(Cry_Gligar),
[SPECIES_STEELIX] = cry_reverse(Cry_Steelix),
[SPECIES_SNUBBULL] = cry_reverse(Cry_Snubbull),
[SPECIES_GRANBULL] = cry_reverse(Cry_Granbull),
[SPECIES_QWILFISH] = cry_reverse(Cry_Qwilfish),
[SPECIES_SCIZOR] = cry_reverse(Cry_Scizor),
[SPECIES_SHUCKLE] = cry_reverse(Cry_Shuckle),
[SPECIES_HERACROSS] = cry_reverse(Cry_Heracross),
[SPECIES_SNEASEL] = cry_reverse(Cry_Sneasel),
[SPECIES_TEDDIURSA] = cry_reverse(Cry_Teddiursa),
[SPECIES_URSARING] = cry_reverse(Cry_Ursaring),
[SPECIES_SLUGMA] = cry_reverse(Cry_Slugma),
[SPECIES_MAGCARGO] = cry_reverse(Cry_Magcargo),
[SPECIES_SWINUB] = cry_reverse(Cry_Swinub),
[SPECIES_PILOSWINE] = cry_reverse(Cry_Piloswine),
[SPECIES_CORSOLA] = cry_reverse(Cry_Corsola),
[SPECIES_REMORAID] = cry_reverse(Cry_Remoraid),
[SPECIES_OCTILLERY] = cry_reverse(Cry_Octillery),
[SPECIES_DELIBIRD] = cry_reverse(Cry_Delibird),
[SPECIES_MANTINE] = cry_reverse(Cry_Mantine),
[SPECIES_SKARMORY] = cry_reverse(Cry_Skarmory),
[SPECIES_HOUNDOUR] = cry_reverse(Cry_Houndour),
[SPECIES_HOUNDOOM] = cry_reverse(Cry_Houndoom),
[SPECIES_KINGDRA] = cry_reverse(Cry_Kingdra),
[SPECIES_PHANPY] = cry_reverse(Cry_Phanpy),
[SPECIES_DONPHAN] = cry_reverse(Cry_Donphan),
[SPECIES_PORYGON2] = cry_reverse(Cry_Porygon2),
[SPECIES_STANTLER] = cry_reverse(Cry_Stantler),
[SPECIES_SMEARGLE] = cry_reverse(Cry_Smeargle),
[SPECIES_TYROGUE] = cry_reverse(Cry_Tyrogue),
[SPECIES_HITMONTOP] = cry_reverse(Cry_Hitmontop),
[SPECIES_SMOOCHUM] = cry_reverse(Cry_Smoochum),
[SPECIES_ELEKID] = cry_reverse(Cry_Elekid),
[SPECIES_MAGBY] = cry_reverse(Cry_Magby),
[SPECIES_MILTANK] = cry_reverse(Cry_Miltank),
[SPECIES_BLISSEY] = cry_reverse(Cry_Blissey),
[SPECIES_RAIKOU] = cry_reverse(Cry_Raikou),
[SPECIES_ENTEI] = cry_reverse(Cry_Entei),
[SPECIES_SUICUNE] = cry_reverse(Cry_Suicune),
[SPECIES_LARVITAR] = cry_reverse(Cry_Larvitar),
[SPECIES_PUPITAR] = cry_reverse(Cry_Pupitar),
[SPECIES_TYRANITAR] = cry_reverse(Cry_Tyranitar),
[SPECIES_LUGIA] = cry_reverse(Cry_Lugia),
[SPECIES_HO_OH] = cry_reverse(Cry_HoOh),
[SPECIES_CELEBI] = cry_reverse(Cry_Celebi),
[SPECIES_TREECKO] = cry_reverse(Cry_Treecko),
[SPECIES_GROVYLE] = cry_reverse(Cry_Grovyle),
[SPECIES_SCEPTILE] = cry_reverse(Cry_Sceptile),
[SPECIES_TORCHIC] = cry_reverse(Cry_Torchic),
[SPECIES_COMBUSKEN] = cry_reverse(Cry_Combusken),
[SPECIES_BLAZIKEN] = cry_reverse(Cry_Blaziken),
[SPECIES_MUDKIP] = cry_reverse(Cry_Mudkip),
[SPECIES_MARSHTOMP] = cry_reverse(Cry_Marshtomp),
[SPECIES_SWAMPERT] = cry_reverse(Cry_Swampert),
[SPECIES_POOCHYENA] = cry_reverse(Cry_Poochyena),
[SPECIES_MIGHTYENA] = cry_reverse(Cry_Mightyena),
[SPECIES_ZIGZAGOON] = cry_reverse(Cry_Zigzagoon),
[SPECIES_LINOONE] = cry_reverse(Cry_Linoone),
[SPECIES_WURMPLE] = cry_reverse(Cry_Wurmple),
[SPECIES_SILCOON] = cry_reverse(Cry_Silcoon),
[SPECIES_BEAUTIFLY] = cry_reverse(Cry_Beautifly),
[SPECIES_CASCOON] = cry_reverse(Cry_Cascoon),
[SPECIES_DUSTOX] = cry_reverse(Cry_Dustox),
[SPECIES_LOTAD] = cry_reverse(Cry_Lotad),
[SPECIES_LOMBRE] = cry_reverse(Cry_Lombre),
[SPECIES_LUDICOLO] = cry_reverse(Cry_Ludicolo),
[SPECIES_SEEDOT] = cry_reverse(Cry_Seedot),
[SPECIES_NUZLEAF] = cry_reverse(Cry_Nuzleaf),
[SPECIES_SHIFTRY] = cry_reverse(Cry_Shiftry),
[SPECIES_TAILLOW] = cry_reverse(Cry_Taillow),
[SPECIES_SWELLOW] = cry_reverse(Cry_Swellow),
[SPECIES_WINGULL] = cry_reverse(Cry_Wingull),
[SPECIES_PELIPPER] = cry_reverse(Cry_Pelipper),
[SPECIES_RALTS] = cry_reverse(Cry_Ralts),
[SPECIES_KIRLIA] = cry_reverse(Cry_Kirlia),
[SPECIES_GARDEVOIR] = cry_reverse(Cry_Gardevoir),
[SPECIES_SURSKIT] = cry_reverse(Cry_Surskit),
[SPECIES_MASQUERAIN] = cry_reverse(Cry_Masquerain),
[SPECIES_SHROOMISH] = cry_reverse(Cry_Shroomish),
[SPECIES_BRELOOM] = cry_reverse(Cry_Breloom),
[SPECIES_SLAKOTH] = cry_reverse(Cry_Slakoth),
[SPECIES_VIGOROTH] = cry_reverse(Cry_Vigoroth),
[SPECIES_SLAKING] = cry_reverse(Cry_Slaking),
[SPECIES_NINCADA] = cry_reverse(Cry_Nincada),
[SPECIES_NINJASK] = cry_reverse(Cry_Ninjask),
[SPECIES_SHEDINJA] = cry_reverse(Cry_Shedinja),
[SPECIES_WHISMUR] = cry_reverse(Cry_Whismur),
[SPECIES_LOUDRED] = cry_reverse(Cry_Loudred),
[SPECIES_EXPLOUD] = cry_reverse(Cry_Exploud),
[SPECIES_MAKUHITA] = cry_reverse(Cry_Makuhita),
[SPECIES_HARIYAMA] = cry_reverse(Cry_Hariyama),
[SPECIES_AZURILL] = cry_reverse(Cry_Azurill),
[SPECIES_NOSEPASS] = cry_reverse(Cry_Nosepass),
[SPECIES_SKITTY] = cry_reverse(Cry_Skitty),
[SPECIES_DELCATTY] = cry_reverse(Cry_Delcatty),
[SPECIES_SABLEYE] = cry_reverse(Cry_Sableye),
[SPECIES_MAWILE] = cry_reverse(Cry_Mawile),
[SPECIES_ARON] = cry_reverse(Cry_Aron),
[SPECIES_LAIRON] = cry_reverse(Cry_Lairon),
[SPECIES_AGGRON] = cry_reverse(Cry_Aggron),
[SPECIES_MEDITITE] = cry_reverse(Cry_Meditite),
[SPECIES_MEDICHAM] = cry_reverse(Cry_Medicham),
[SPECIES_ELECTRIKE] = cry_reverse(Cry_Electrike),
[SPECIES_MANECTRIC] = cry_reverse(Cry_Manectric),
[SPECIES_PLUSLE] = cry_reverse(Cry_Plusle),
[SPECIES_MINUN] = cry_reverse(Cry_Minun),
[SPECIES_VOLBEAT] = cry_reverse(Cry_Volbeat),
[SPECIES_ILLUMISE] = cry_reverse(Cry_Illumise),
[SPECIES_ROSELIA] = cry_reverse(Cry_Roselia),
[SPECIES_GULPIN] = cry_reverse(Cry_Gulpin),
[SPECIES_SWALOT] = cry_reverse(Cry_Swalot),
[SPECIES_CARVANHA] = cry_reverse(Cry_Carvanha),
[SPECIES_SHARPEDO] = cry_reverse(Cry_Sharpedo),
[SPECIES_WAILMER] = cry_reverse(Cry_Wailmer),
[SPECIES_WAILORD] = cry_reverse(Cry_Wailord),
[SPECIES_NUMEL] = cry_reverse(Cry_Numel),
[SPECIES_CAMERUPT] = cry_reverse(Cry_Camerupt),
[SPECIES_TORKOAL] = cry_reverse(Cry_Torkoal),
[SPECIES_SPOINK] = cry_reverse(Cry_Spoink),
[SPECIES_GRUMPIG] = cry_reverse(Cry_Grumpig),
[SPECIES_SPINDA] = cry_reverse(Cry_Spinda),
[SPECIES_TRAPINCH] = cry_reverse(Cry_Trapinch),
[SPECIES_VIBRAVA] = cry_reverse(Cry_Vibrava),
[SPECIES_FLYGON] = cry_reverse(Cry_Flygon),
[SPECIES_CACNEA] = cry_reverse(Cry_Cacnea),
[SPECIES_CACTURNE] = cry_reverse(Cry_Cacturne),
[SPECIES_SWABLU] = cry_reverse(Cry_Swablu),
[SPECIES_ALTARIA] = cry_reverse(Cry_Altaria),
[SPECIES_ZANGOOSE] = cry_reverse(Cry_Zangoose),
[SPECIES_SEVIPER] = cry_reverse(Cry_Seviper),
[SPECIES_LUNATONE] = cry_reverse(Cry_Lunatone),
[SPECIES_SOLROCK] = cry_reverse(Cry_Solrock),
[SPECIES_BARBOACH] = cry_reverse(Cry_Barboach),
[SPECIES_WHISCASH] = cry_reverse(Cry_Whiscash),
[SPECIES_CORPHISH] = cry_reverse(Cry_Corphish),
[SPECIES_CRAWDAUNT] = cry_reverse(Cry_Crawdaunt),
[SPECIES_BALTOY] = cry_reverse(Cry_Baltoy),
[SPECIES_CLAYDOL] = cry_reverse(Cry_Claydol),
[SPECIES_LILEEP] = cry_reverse(Cry_Lileep),
[SPECIES_CRADILY] = cry_reverse(Cry_Cradily),
[SPECIES_ANORITH] = cry_reverse(Cry_Anorith),
[SPECIES_ARMALDO] = cry_reverse(Cry_Armaldo),
[SPECIES_FEEBAS] = cry_reverse(Cry_Feebas),
[SPECIES_MILOTIC] = cry_reverse(Cry_Milotic),
[SPECIES_CASTFORM] = cry_reverse(Cry_Castform),
[SPECIES_KECLEON] = cry_reverse(Cry_Kecleon),
[SPECIES_SHUPPET] = cry_reverse(Cry_Shuppet),
[SPECIES_BANETTE] = cry_reverse(Cry_Banette),
[SPECIES_DUSKULL] = cry_reverse(Cry_Duskull),
[SPECIES_DUSCLOPS] = cry_reverse(Cry_Dusclops),
[SPECIES_TROPIUS] = cry_reverse(Cry_Tropius),
[SPECIES_CHIMECHO] = cry_reverse(Cry_Chimecho),
[SPECIES_ABSOL] = cry_reverse(Cry_Absol),
[SPECIES_WYNAUT] = cry_reverse(Cry_Wynaut),
[SPECIES_SNORUNT] = cry_reverse(Cry_Snorunt),
[SPECIES_GLALIE] = cry_reverse(Cry_Glalie),
[SPECIES_SPHEAL] = cry_reverse(Cry_Spheal),
[SPECIES_SEALEO] = cry_reverse(Cry_Sealeo),
[SPECIES_WALREIN] = cry_reverse(Cry_Walrein),
[SPECIES_CLAMPERL] = cry_reverse(Cry_Clamperl),
[SPECIES_HUNTAIL] = cry_reverse(Cry_Huntail),
[SPECIES_GOREBYSS] = cry_reverse(Cry_Gorebyss),
[SPECIES_RELICANTH] = cry_reverse(Cry_Relicanth),
[SPECIES_LUVDISC] = cry_reverse(Cry_Luvdisc),
[SPECIES_BAGON] = cry_reverse(Cry_Bagon),
[SPECIES_SHELGON] = cry_reverse(Cry_Shelgon),
[SPECIES_SALAMENCE] = cry_reverse(Cry_Salamence),
[SPECIES_BELDUM] = cry_reverse(Cry_Beldum),
[SPECIES_METANG] = cry_reverse(Cry_Metang),
[SPECIES_METAGROSS] = cry_reverse(Cry_Metagross),
[SPECIES_REGIROCK] = cry_reverse(Cry_Regirock),
[SPECIES_REGICE] = cry_reverse(Cry_Regice),
[SPECIES_REGISTEEL] = cry_reverse(Cry_Registeel),
[SPECIES_LATIAS] = cry_reverse(Cry_Latias),
[SPECIES_LATIOS] = cry_reverse(Cry_Latios),
[SPECIES_KYOGRE] = cry_reverse(Cry_Kyogre),
[SPECIES_GROUDON] = cry_reverse(Cry_Groudon),
[SPECIES_RAYQUAZA] = cry_reverse(Cry_Rayquaza),
[SPECIES_JIRACHI] = cry_reverse(Cry_Jirachi),
[SPECIES_DEOXYS] = cry_reverse(Cry_Deoxys),
[SPECIES_TURTWIG] = cry_reverse(Cry_Turtwig),
[SPECIES_GROTLE] = cry_reverse(Cry_Grotle),
[SPECIES_TORTERRA] = cry_reverse(Cry_Torterra),
[SPECIES_CHIMCHAR] = cry_reverse(Cry_Chimchar),
[SPECIES_MONFERNO] = cry_reverse(Cry_Monferno),
[SPECIES_INFERNAPE] = cry_reverse(Cry_Infernape),
[SPECIES_PIPLUP] = cry_reverse(Cry_Piplup),
[SPECIES_PRINPLUP] = cry_reverse(Cry_Prinplup),
[SPECIES_EMPOLEON] = cry_reverse(Cry_Empoleon),
[SPECIES_STARLY] = cry_reverse(Cry_Starly),
[SPECIES_STARAVIA] = cry_reverse(Cry_Staravia),
[SPECIES_STARAPTOR] = cry_reverse(Cry_Staraptor),
[SPECIES_BIDOOF] = cry_reverse(Cry_Bidoof),
[SPECIES_BIBAREL] = cry_reverse(Cry_Bibarel),
[SPECIES_KRICKETOT] = cry_reverse(Cry_Kricketot),
[SPECIES_KRICKETUNE] = cry_reverse(Cry_Kricketune),
[SPECIES_SHINX] = cry_reverse(Cry_Shinx),
[SPECIES_LUXIO] = cry_reverse(Cry_Luxio),
[SPECIES_LUXRAY] = cry_reverse(Cry_Luxray),
[SPECIES_BUDEW] = cry_reverse(Cry_Budew),
[SPECIES_ROSERADE] = cry_reverse(Cry_Roserade),
[SPECIES_CRANIDOS] = cry_reverse(Cry_Cranidos),
[SPECIES_RAMPARDOS] = cry_reverse(Cry_Rampardos),
[SPECIES_SHIELDON] = cry_reverse(Cry_Shieldon),
[SPECIES_BASTIODON] = cry_reverse(Cry_Bastiodon),
[SPECIES_BURMY] = cry_reverse(Cry_Burmy),
[SPECIES_WORMADAM] = cry_reverse(Cry_Wormadam),
[SPECIES_MOTHIM] = cry_reverse(Cry_Mothim),
[SPECIES_COMBEE] = cry_reverse(Cry_Combee),
[SPECIES_VESPIQUEN] = cry_reverse(Cry_Vespiquen),
[SPECIES_PACHIRISU] = cry_reverse(Cry_Pachirisu),
[SPECIES_BUIZEL] = cry_reverse(Cry_Buizel),
[SPECIES_FLOATZEL] = cry_reverse(Cry_Floatzel),
[SPECIES_CHERUBI] = cry_reverse(Cry_Cherubi),
[SPECIES_CHERRIM] = cry_reverse(Cry_Cherrim),
[SPECIES_SHELLOS] = cry_reverse(Cry_Shellos),
[SPECIES_GASTRODON] = cry_reverse(Cry_Gastrodon),
[SPECIES_AMBIPOM] = cry_reverse(Cry_Ambipom),
[SPECIES_DRIFLOON] = cry_reverse(Cry_Drifloon),
[SPECIES_DRIFBLIM] = cry_reverse(Cry_Drifblim),
[SPECIES_BUNEARY] = cry_reverse(Cry_Buneary),
[SPECIES_LOPUNNY] = cry_reverse(Cry_Lopunny),
[SPECIES_MISMAGIUS] = cry_reverse(Cry_Mismagius),
[SPECIES_HONCHKROW] = cry_reverse(Cry_Honchkrow),
[SPECIES_GLAMEOW] = cry_reverse(Cry_Glameow),
[SPECIES_PURUGLY] = cry_reverse(Cry_Purugly),
[SPECIES_CHINGLING] = cry_reverse(Cry_Chingling),
[SPECIES_STUNKY] = cry_reverse(Cry_Stunky),
[SPECIES_SKUNTANK] = cry_reverse(Cry_Skuntank),
[SPECIES_BRONZOR] = cry_reverse(Cry_Bronzor),
[SPECIES_BRONZONG] = cry_reverse(Cry_Bronzong),
[SPECIES_BONSLY] = cry_reverse(Cry_Bonsly),
[SPECIES_MIME_JR] = cry_reverse(Cry_MimeJr),
[SPECIES_HAPPINY] = cry_reverse(Cry_Happiny),
[SPECIES_CHATOT] = cry_reverse(Cry_Chatot),
[SPECIES_SPIRITOMB] = cry_reverse(Cry_Spiritomb),
[SPECIES_GIBLE] = cry_reverse(Cry_Gible),
[SPECIES_GABITE] = cry_reverse(Cry_Gabite),
[SPECIES_GARCHOMP] = cry_reverse(Cry_Garchomp),
[SPECIES_MUNCHLAX] = cry_reverse(Cry_Munchlax),
[SPECIES_RIOLU] = cry_reverse(Cry_Riolu),
[SPECIES_LUCARIO] = cry_reverse(Cry_Lucario),
[SPECIES_HIPPOPOTAS] = cry_reverse(Cry_Hippopotas),
[SPECIES_HIPPOWDON] = cry_reverse(Cry_Hippowdon),
[SPECIES_SKORUPI] = cry_reverse(Cry_Skorupi),
[SPECIES_DRAPION] = cry_reverse(Cry_Drapion),
[SPECIES_CROAGUNK] = cry_reverse(Cry_Croagunk),
[SPECIES_TOXICROAK] = cry_reverse(Cry_Toxicroak),
[SPECIES_CARNIVINE] = cry_reverse(Cry_Carnivine),
[SPECIES_FINNEON] = cry_reverse(Cry_Finneon),
[SPECIES_LUMINEON] = cry_reverse(Cry_Lumineon),
[SPECIES_MANTYKE] = cry_reverse(Cry_Mantyke),
[SPECIES_SNOVER] = cry_reverse(Cry_Snover),
[SPECIES_ABOMASNOW] = cry_reverse(Cry_Abomasnow),
[SPECIES_WEAVILE] = cry_reverse(Cry_Weavile),
[SPECIES_MAGNEZONE] = cry_reverse(Cry_Magnezone),
[SPECIES_LICKILICKY] = cry_reverse(Cry_Lickilicky),
[SPECIES_RHYPERIOR] = cry_reverse(Cry_Rhyperior),
[SPECIES_TANGROWTH] = cry_reverse(Cry_Tangrowth),
[SPECIES_ELECTIVIRE] = cry_reverse(Cry_Electivire),
[SPECIES_MAGMORTAR] = cry_reverse(Cry_Magmortar),
[SPECIES_TOGEKISS] = cry_reverse(Cry_Togekiss),
[SPECIES_YANMEGA] = cry_reverse(Cry_Yanmega),
[SPECIES_LEAFEON] = cry_reverse(Cry_Leafeon),
[SPECIES_GLACEON] = cry_reverse(Cry_Glaceon),
[SPECIES_GLISCOR] = cry_reverse(Cry_Gliscor),
[SPECIES_MAMOSWINE] = cry_reverse(Cry_Mamoswine),
[SPECIES_PORYGON_Z] = cry_reverse(Cry_PorygonZ),
[SPECIES_GALLADE] = cry_reverse(Cry_Gallade),
[SPECIES_PROBOPASS] = cry_reverse(Cry_Probopass),
[SPECIES_DUSKNOIR] = cry_reverse(Cry_Dusknoir),
[SPECIES_FROSLASS] = cry_reverse(Cry_Froslass),
[SPECIES_ROTOM] = cry_reverse(Cry_Rotom),
[SPECIES_UXIE] = cry_reverse(Cry_Uxie),
[SPECIES_MESPRIT] = cry_reverse(Cry_Mesprit),
[SPECIES_AZELF] = cry_reverse(Cry_Azelf),
[SPECIES_DIALGA] = cry_reverse(Cry_Dialga),
[SPECIES_PALKIA] = cry_reverse(Cry_Palkia),
[SPECIES_HEATRAN] = cry_reverse(Cry_Heatran),
[SPECIES_REGIGIGAS] = cry_reverse(Cry_Regigigas),
[SPECIES_GIRATINA] = cry_reverse(Cry_Giratina),
[SPECIES_CRESSELIA] = cry_reverse(Cry_Cresselia),
[SPECIES_PHIONE] = cry_reverse(Cry_Phione),
[SPECIES_MANAPHY] = cry_reverse(Cry_Manaphy),
[SPECIES_DARKRAI] = cry_reverse(Cry_Darkrai),
[SPECIES_SHAYMIN] = cry_reverse(Cry_Shaymin),
[SPECIES_ARCEUS] = cry_reverse(Cry_Arceus),
[SPECIES_VICTINI] = cry_reverse(Cry_Victini),
[SPECIES_SNIVY] = cry_reverse(Cry_Snivy),
[SPECIES_SERVINE] = cry_reverse(Cry_Servine),
[SPECIES_SERPERIOR] = cry_reverse(Cry_Serperior),
[SPECIES_TEPIG] = cry_reverse(Cry_Tepig),
[SPECIES_PIGNITE] = cry_reverse(Cry_Pignite),
[SPECIES_EMBOAR] = cry_reverse(Cry_Emboar),
[SPECIES_OSHAWOTT] = cry_reverse(Cry_Oshawott),
[SPECIES_DEWOTT] = cry_reverse(Cry_Dewott),
[SPECIES_SAMUROTT] = cry_reverse(Cry_Samurott),
[SPECIES_PATRAT] = cry_reverse(Cry_Patrat),
[SPECIES_WATCHOG] = cry_reverse(Cry_Watchog),
[SPECIES_LILLIPUP] = cry_reverse(Cry_Lillipup),
[SPECIES_HERDIER] = cry_reverse(Cry_Herdier),
[SPECIES_STOUTLAND] = cry_reverse(Cry_Stoutland),
[SPECIES_PURRLOIN] = cry_reverse(Cry_Purrloin),
[SPECIES_LIEPARD] = cry_reverse(Cry_Liepard),
[SPECIES_PANSAGE] = cry_reverse(Cry_Pansage),
[SPECIES_SIMISAGE] = cry_reverse(Cry_Simisage),
[SPECIES_PANSEAR] = cry_reverse(Cry_Pansear),
[SPECIES_SIMISEAR] = cry_reverse(Cry_Simisear),
[SPECIES_PANPOUR] = cry_reverse(Cry_Panpour),
[SPECIES_SIMIPOUR] = cry_reverse(Cry_Simipour),
[SPECIES_MUNNA] = cry_reverse(Cry_Munna),
[SPECIES_MUSHARNA] = cry_reverse(Cry_Musharna),
[SPECIES_PIDOVE] = cry_reverse(Cry_Pidove),
[SPECIES_TRANQUILL] = cry_reverse(Cry_Tranquill),
[SPECIES_UNFEZANT] = cry_reverse(Cry_Unfezant),
[SPECIES_BLITZLE] = cry_reverse(Cry_Blitzle),
[SPECIES_ZEBSTRIKA] = cry_reverse(Cry_Zebstrika),
[SPECIES_ROGGENROLA] = cry_reverse(Cry_Roggenrola),
[SPECIES_BOLDORE] = cry_reverse(Cry_Boldore),
[SPECIES_GIGALITH] = cry_reverse(Cry_Gigalith),
[SPECIES_WOOBAT] = cry_reverse(Cry_Woobat),
[SPECIES_SWOOBAT] = cry_reverse(Cry_Swoobat),
[SPECIES_DRILBUR] = cry_reverse(Cry_Drilbur),
[SPECIES_EXCADRILL] = cry_reverse(Cry_Excadrill),
[SPECIES_AUDINO] = cry_reverse(Cry_Audino),
[SPECIES_TIMBURR] = cry_reverse(Cry_Timburr),
[SPECIES_GURDURR] = cry_reverse(Cry_Gurdurr),
[SPECIES_CONKELDURR] = cry_reverse(Cry_Conkeldurr),
[SPECIES_TYMPOLE] = cry_reverse(Cry_Tympole),
[SPECIES_PALPITOAD] = cry_reverse(Cry_Palpitoad),
[SPECIES_SEISMITOAD] = cry_reverse(Cry_Seismitoad),
[SPECIES_THROH] = cry_reverse(Cry_Throh),
[SPECIES_SAWK] = cry_reverse(Cry_Sawk),
[SPECIES_SEWADDLE] = cry_reverse(Cry_Sewaddle),
[SPECIES_SWADLOON] = cry_reverse(Cry_Swadloon),
[SPECIES_LEAVANNY] = cry_reverse(Cry_Leavanny),
[SPECIES_VENIPEDE] = cry_reverse(Cry_Venipede),
[SPECIES_WHIRLIPEDE] = cry_reverse(Cry_Whirlipede),
[SPECIES_SCOLIPEDE] = cry_reverse(Cry_Scolipede),
[SPECIES_COTTONEE] = cry_reverse(Cry_Cottonee),
[SPECIES_WHIMSICOTT] = cry_reverse(Cry_Whimsicott),
[SPECIES_PETILIL] = cry_reverse(Cry_Petilil),
[SPECIES_LILLIGANT] = cry_reverse(Cry_Lilligant),
[SPECIES_BASCULIN] = cry_reverse(Cry_Basculin),
[SPECIES_SANDILE] = cry_reverse(Cry_Sandile),
[SPECIES_KROKOROK] = cry_reverse(Cry_Krokorok),
[SPECIES_KROOKODILE] = cry_reverse(Cry_Krookodile),
[SPECIES_DARUMAKA] = cry_reverse(Cry_Darumaka),
[SPECIES_DARMANITAN] = cry_reverse(Cry_Darmanitan),
[SPECIES_MARACTUS] = cry_reverse(Cry_Maractus),
[SPECIES_DWEBBLE] = cry_reverse(Cry_Dwebble),
[SPECIES_CRUSTLE] = cry_reverse(Cry_Crustle),
[SPECIES_SCRAGGY] = cry_reverse(Cry_Scraggy),
[SPECIES_SCRAFTY] = cry_reverse(Cry_Scrafty),
[SPECIES_SIGILYPH] = cry_reverse(Cry_Sigilyph),
[SPECIES_YAMASK] = cry_reverse(Cry_Yamask),
[SPECIES_COFAGRIGUS] = cry_reverse(Cry_Cofagrigus),
[SPECIES_TIRTOUGA] = cry_reverse(Cry_Tirtouga),
[SPECIES_CARRACOSTA] = cry_reverse(Cry_Carracosta),
[SPECIES_ARCHEN] = cry_reverse(Cry_Archen),
[SPECIES_ARCHEOPS] = cry_reverse(Cry_Archeops),
[SPECIES_TRUBBISH] = cry_reverse(Cry_Trubbish),
[SPECIES_GARBODOR] = cry_reverse(Cry_Garbodor),
[SPECIES_ZORUA] = cry_reverse(Cry_Zorua),
[SPECIES_ZOROARK] = cry_reverse(Cry_Zoroark),
[SPECIES_MINCCINO] = cry_reverse(Cry_Minccino),
[SPECIES_CINCCINO] = cry_reverse(Cry_Cinccino),
[SPECIES_GOTHITA] = cry_reverse(Cry_Gothita),
[SPECIES_GOTHORITA] = cry_reverse(Cry_Gothorita),
[SPECIES_GOTHITELLE] = cry_reverse(Cry_Gothitelle),
[SPECIES_SOLOSIS] = cry_reverse(Cry_Solosis),
[SPECIES_DUOSION] = cry_reverse(Cry_Duosion),
[SPECIES_REUNICLUS] = cry_reverse(Cry_Reuniclus),
[SPECIES_DUCKLETT] = cry_reverse(Cry_Ducklett),
[SPECIES_SWANNA] = cry_reverse(Cry_Swanna),
[SPECIES_VANILLITE] = cry_reverse(Cry_Vanillite),
[SPECIES_VANILLISH] = cry_reverse(Cry_Vanillish),
[SPECIES_VANILLUXE] = cry_reverse(Cry_Vanilluxe),
[SPECIES_DEERLING] = cry_reverse(Cry_Deerling),
[SPECIES_SAWSBUCK] = cry_reverse(Cry_Sawsbuck),
[SPECIES_EMOLGA] = cry_reverse(Cry_Emolga),
[SPECIES_KARRABLAST] = cry_reverse(Cry_Karrablast),
[SPECIES_ESCAVALIER] = cry_reverse(Cry_Escavalier),
[SPECIES_FOONGUS] = cry_reverse(Cry_Foongus),
[SPECIES_AMOONGUSS] = cry_reverse(Cry_Amoonguss),
[SPECIES_FRILLISH] = cry_reverse(Cry_Frillish),
[SPECIES_JELLICENT] = cry_reverse(Cry_Jellicent),
[SPECIES_ALOMOMOLA] = cry_reverse(Cry_Alomomola),
[SPECIES_JOLTIK] = cry_reverse(Cry_Joltik),
[SPECIES_GALVANTULA] = cry_reverse(Cry_Galvantula),
[SPECIES_FERROSEED] = cry_reverse(Cry_Ferroseed),
[SPECIES_FERROTHORN] = cry_reverse(Cry_Ferrothorn),
[SPECIES_KLINK] = cry_reverse(Cry_Klink),
[SPECIES_KLANG] = cry_reverse(Cry_Klang),
[SPECIES_KLINKLANG] = cry_reverse(Cry_Klinklang),
[SPECIES_TYNAMO] = cry_reverse(Cry_Tynamo),
[SPECIES_EELEKTRIK] = cry_reverse(Cry_Eelektrik),
[SPECIES_EELEKTROSS] = cry_reverse(Cry_Eelektross),
[SPECIES_ELGYEM] = cry_reverse(Cry_Elgyem),
[SPECIES_BEHEEYEM] = cry_reverse(Cry_Beheeyem),
[SPECIES_LITWICK] = cry_reverse(Cry_Litwick),
[SPECIES_LAMPENT] = cry_reverse(Cry_Lampent),
[SPECIES_CHANDELURE] = cry_reverse(Cry_Chandelure),
[SPECIES_AXEW] = cry_reverse(Cry_Axew),
[SPECIES_FRAXURE] = cry_reverse(Cry_Fraxure),
[SPECIES_HAXORUS] = cry_reverse(Cry_Haxorus),
[SPECIES_CUBCHOO] = cry_reverse(Cry_Cubchoo),
[SPECIES_BEARTIC] = cry_reverse(Cry_Beartic),
[SPECIES_CRYOGONAL] = cry_reverse(Cry_Cryogonal),
[SPECIES_SHELMET] = cry_reverse(Cry_Shelmet),
[SPECIES_ACCELGOR] = cry_reverse(Cry_Accelgor),
[SPECIES_STUNFISK] = cry_reverse(Cry_Stunfisk),
[SPECIES_MIENFOO] = cry_reverse(Cry_Mienfoo),
[SPECIES_MIENSHAO] = cry_reverse(Cry_Mienshao),
[SPECIES_DRUDDIGON] = cry_reverse(Cry_Druddigon),
[SPECIES_GOLETT] = cry_reverse(Cry_Golett),
[SPECIES_GOLURK] = cry_reverse(Cry_Golurk),
[SPECIES_PAWNIARD] = cry_reverse(Cry_Pawniard),
[SPECIES_BISHARP] = cry_reverse(Cry_Bisharp),
[SPECIES_BOUFFALANT] = cry_reverse(Cry_Bouffalant),
[SPECIES_RUFFLET] = cry_reverse(Cry_Rufflet),
[SPECIES_BRAVIARY] = cry_reverse(Cry_Braviary),
[SPECIES_VULLABY] = cry_reverse(Cry_Vullaby),
[SPECIES_MANDIBUZZ] = cry_reverse(Cry_Mandibuzz),
[SPECIES_HEATMOR] = cry_reverse(Cry_Heatmor),
[SPECIES_DURANT] = cry_reverse(Cry_Durant),
[SPECIES_DEINO] = cry_reverse(Cry_Deino),
[SPECIES_ZWEILOUS] = cry_reverse(Cry_Zweilous),
[SPECIES_HYDREIGON] = cry_reverse(Cry_Hydreigon),
[SPECIES_LARVESTA] = cry_reverse(Cry_Larvesta),
[SPECIES_VOLCARONA] = cry_reverse(Cry_Volcarona),
[SPECIES_COBALION] = cry_reverse(Cry_Cobalion),
[SPECIES_TERRAKION] = cry_reverse(Cry_Terrakion),
[SPECIES_VIRIZION] = cry_reverse(Cry_Virizion),
[SPECIES_TORNADUS] = cry_reverse(Cry_Tornadus),
[SPECIES_THUNDURUS] = cry_reverse(Cry_Thundurus),
[SPECIES_RESHIRAM] = cry_reverse(Cry_Reshiram),
[SPECIES_ZEKROM] = cry_reverse(Cry_Zekrom),
[SPECIES_LANDORUS] = cry_reverse(Cry_Landorus),
[SPECIES_KYUREM] = cry_reverse(Cry_Kyurem),
[SPECIES_KELDEO] = cry_reverse(Cry_Keldeo),
[SPECIES_MELOETTA] = cry_reverse(Cry_Meloetta),
[SPECIES_GENESECT] = cry_reverse(Cry_Genesect),
[SPECIES_CHESPIN] = cry_reverse(Cry_Chespin),
[SPECIES_QUILLADIN] = cry_reverse(Cry_Quilladin),
[SPECIES_CHESNAUGHT] = cry_reverse(Cry_Chesnaught),
[SPECIES_FENNEKIN] = cry_reverse(Cry_Fennekin),
[SPECIES_BRAIXEN] = cry_reverse(Cry_Braixen),
[SPECIES_DELPHOX] = cry_reverse(Cry_Delphox),
[SPECIES_FROAKIE] = cry_reverse(Cry_Froakie),
[SPECIES_FROGADIER] = cry_reverse(Cry_Frogadier),
[SPECIES_GRENINJA] = cry_reverse(Cry_Greninja),
[SPECIES_BUNNELBY] = cry_reverse(Cry_Bunnelby),
[SPECIES_DIGGERSBY] = cry_reverse(Cry_Diggersby),
[SPECIES_FLETCHLING] = cry_reverse(Cry_Fletchling),
[SPECIES_FLETCHINDER] = cry_reverse(Cry_Fletchinder),
[SPECIES_TALONFLAME] = cry_reverse(Cry_Talonflame),
[SPECIES_SCATTERBUG] = cry_reverse(Cry_Scatterbug),
[SPECIES_SPEWPA] = cry_reverse(Cry_Spewpa),
[SPECIES_VIVILLON] = cry_reverse(Cry_Vivillon),
[SPECIES_LITLEO] = cry_reverse(Cry_Litleo),
[SPECIES_PYROAR] = cry_reverse(Cry_Pyroar),
[SPECIES_FLABEBE] = cry_reverse(Cry_Flabebe),
[SPECIES_FLOETTE] = cry_reverse(Cry_Floette),
[SPECIES_FLORGES] = cry_reverse(Cry_Florges),
[SPECIES_SKIDDO] = cry_reverse(Cry_Skiddo),
[SPECIES_GOGOAT] = cry_reverse(Cry_Gogoat),
[SPECIES_PANCHAM] = cry_reverse(Cry_Pancham),
[SPECIES_PANGORO] = cry_reverse(Cry_Pangoro),
[SPECIES_FURFROU] = cry_reverse(Cry_Furfrou),
[SPECIES_ESPURR] = cry_reverse(Cry_Espurr),
[SPECIES_MEOWSTIC] = cry_reverse(Cry_Meowstic),
[SPECIES_HONEDGE] = cry_reverse(Cry_Honedge),
[SPECIES_DOUBLADE] = cry_reverse(Cry_Doublade),
[SPECIES_AEGISLASH] = cry_reverse(Cry_Aegislash),
[SPECIES_SPRITZEE] = cry_reverse(Cry_Spritzee),
[SPECIES_AROMATISSE] = cry_reverse(Cry_Aromatisse),
[SPECIES_SWIRLIX] = cry_reverse(Cry_Swirlix),
[SPECIES_SLURPUFF] = cry_reverse(Cry_Slurpuff),
[SPECIES_INKAY] = cry_reverse(Cry_Inkay),
[SPECIES_MALAMAR] = cry_reverse(Cry_Malamar),
[SPECIES_BINACLE] = cry_reverse(Cry_Binacle),
[SPECIES_BARBARACLE] = cry_reverse(Cry_Barbaracle),
[SPECIES_SKRELP] = cry_reverse(Cry_Skrelp),
[SPECIES_DRAGALGE] = cry_reverse(Cry_Dragalge),
[SPECIES_CLAUNCHER] = cry_reverse(Cry_Clauncher),
[SPECIES_CLAWITZER] = cry_reverse(Cry_Clawitzer),
[SPECIES_HELIOPTILE] = cry_reverse(Cry_Helioptile),
[SPECIES_HELIOLISK] = cry_reverse(Cry_Heliolisk),
[SPECIES_TYRUNT] = cry_reverse(Cry_Tyrunt),
[SPECIES_TYRANTRUM] = cry_reverse(Cry_Tyrantrum),
[SPECIES_AMAURA] = cry_reverse(Cry_Amaura),
[SPECIES_AURORUS] = cry_reverse(Cry_Aurorus),
[SPECIES_SYLVEON] = cry_reverse(Cry_Sylveon),
[SPECIES_HAWLUCHA] = cry_reverse(Cry_Hawlucha),
[SPECIES_DEDENNE] = cry_reverse(Cry_Dedenne),
[SPECIES_CARBINK] = cry_reverse(Cry_Carbink),
[SPECIES_GOOMY] = cry_reverse(Cry_Goomy),
[SPECIES_SLIGGOO] = cry_reverse(Cry_Sliggoo),
[SPECIES_GOODRA] = cry_reverse(Cry_Goodra),
[SPECIES_KLEFKI] = cry_reverse(Cry_Bulbasaur),
[SPECIES_PHANTUMP] = cry_reverse(Cry_Phantump),
[SPECIES_TREVENANT] = cry_reverse(Cry_Trevenant),
[SPECIES_PUMPKABOO] = cry_reverse(Cry_Pumpkaboo),
[SPECIES_GOURGEIST] = cry_reverse(Cry_Gourgeist),
[SPECIES_BERGMITE] = cry_reverse(Cry_Bergmite),
[SPECIES_AVALUGG] = cry_reverse(Cry_Avalugg),
[SPECIES_NOIBAT] = cry_reverse(Cry_Noibat),
[SPECIES_NOIVERN] = cry_reverse(Cry_Noivern),
[SPECIES_XERNEAS] = cry_reverse(Cry_Xerneas),
[SPECIES_YVELTAL] = cry_reverse(Cry_Yveltal),
[SPECIES_ZYGARDE] = cry_reverse(Cry_Zygarde),
[SPECIES_DIANCIE] = cry_reverse(Cry_Diancie),
[SPECIES_HOOPA] = cry_reverse(Cry_Hoopa),
[SPECIES_VOLCANION] = cry_reverse(Cry_Volcanion),
[SPECIES_ROWLET] = cry_reverse(Cry_Rowlet),
[SPECIES_DARTRIX] = cry_reverse(Cry_Dartrix),
[SPECIES_DECIDUEYE] = cry_reverse(Cry_Decidueye),
[SPECIES_LITTEN] = cry_reverse(Cry_Litten),
[SPECIES_TORRACAT] = cry_reverse(Cry_Torracat),
[SPECIES_INCINEROAR] = cry_reverse(Cry_Incineroar),
[SPECIES_POPPLIO] = cry_reverse(Cry_Popplio),
[SPECIES_BRIONNE] = cry_reverse(Cry_Brionne),
[SPECIES_PRIMARINA] = cry_reverse(Cry_Primarina),
[SPECIES_PIKIPEK] = cry_reverse(Cry_Pikipek),
[SPECIES_TRUMBEAK] = cry_reverse(Cry_Trumbeak),
[SPECIES_TOUCANNON] = cry_reverse(Cry_Toucannon),
[SPECIES_YUNGOOS] = cry_reverse(Cry_Yungoos),
[SPECIES_GUMSHOOS] = cry_reverse(Cry_Gumshoos),
[SPECIES_GRUBBIN] = cry_reverse(Cry_Grubbin),
[SPECIES_CHARJABUG] = cry_reverse(Cry_Charjabug),
[SPECIES_VIKAVOLT] = cry_reverse(Cry_Vikavolt),
[SPECIES_CRABRAWLER] = cry_reverse(Cry_Crabrawler),
[SPECIES_CRABOMINABLE] = cry_reverse(Cry_Crabominable),
[SPECIES_ORICORIO] = cry_reverse(Cry_Oricorio),
[SPECIES_CUTIEFLY] = cry_reverse(Cry_Cutiefly),
[SPECIES_RIBOMBEE] = cry_reverse(Cry_Ribombee),
[SPECIES_ROCKRUFF] = cry_reverse(Cry_Rockruff),
[SPECIES_LYCANROC] = cry_reverse(Cry_Lycanroc),
[SPECIES_WISHIWASHI] = cry_reverse(Cry_Wishiwashi),
[SPECIES_MAREANIE] = cry_reverse(Cry_Mareanie),
[SPECIES_TOXAPEX] = cry_reverse(Cry_Toxapex),
[SPECIES_MUDBRAY] = cry_reverse(Cry_Mudbray),
[SPECIES_MUDSDALE] = cry_reverse(Cry_Mudsdale),
[SPECIES_DEWPIDER] = cry_reverse(Cry_Dewpider),
[SPECIES_ARAQUANID] = cry_reverse(Cry_Araquanid),
[SPECIES_FOMANTIS] = cry_reverse(Cry_Fomantis),
[SPECIES_LURANTIS] = cry_reverse(Cry_Lurantis),
[SPECIES_MORELULL] = cry_reverse(Cry_Morelull),
[SPECIES_SHIINOTIC] = cry_reverse(Cry_Shiinotic),
[SPECIES_SALANDIT] = cry_reverse(Cry_Salandit),
[SPECIES_SALAZZLE] = cry_reverse(Cry_Salazzle),
[SPECIES_STUFFUL] = cry_reverse(Cry_Stufful),
[SPECIES_BEWEAR] = cry_reverse(Cry_Bewear),
[SPECIES_BOUNSWEET] = cry_reverse(Cry_Bounsweet),
[SPECIES_STEENEE] = cry_reverse(Cry_Steenee),
[SPECIES_TSAREENA] = cry_reverse(Cry_Tsareena),
[SPECIES_COMFEY] = cry_reverse(Cry_Comfey),
[SPECIES_ORANGURU] = cry_reverse(Cry_Oranguru),
[SPECIES_PASSIMIAN] = cry_reverse(Cry_Passimian),
[SPECIES_WIMPOD] = cry_reverse(Cry_Wimpod),
[SPECIES_GOLISOPOD] = cry_reverse(Cry_Golisopod),
[SPECIES_SANDYGAST] = cry_reverse(Cry_Sandygast),
[SPECIES_PALOSSAND] = cry_reverse(Cry_Palossand),
[SPECIES_PYUKUMUKU] = cry_reverse(Cry_Pyukumuku),
[SPECIES_TYPE_NULL] = cry_reverse(Cry_TypeNull),
[SPECIES_SILVALLY] = cry_reverse(Cry_Silvally),
[SPECIES_MINIOR] = cry_reverse(Cry_Minior),
[SPECIES_KOMALA] = cry_reverse(Cry_Komala),
[SPECIES_TURTONATOR] = cry_reverse(Cry_Turtonator),
[SPECIES_TOGEDEMARU] = cry_reverse(Cry_Togedemaru),
[SPECIES_MIMIKYU] = cry_reverse(Cry_Mimikyu),
[SPECIES_BRUXISH] = cry_reverse(Cry_Bruxish),
[SPECIES_DRAMPA] = cry_reverse(Cry_Drampa),
[SPECIES_DHELMISE] = cry_reverse(Cry_Dhelmise),
[SPECIES_JANGMO_O] = cry_reverse(Cry_Jangmoo),
[SPECIES_HAKAMO_O] = cry_reverse(Cry_Hakamoo),
[SPECIES_KOMMO_O] = cry_reverse(Cry_Kommoo),
[SPECIES_TAPU_KOKO] = cry_reverse(Cry_TapuKoko),
[SPECIES_TAPU_LELE] = cry_reverse(Cry_TapuLele),
[SPECIES_TAPU_BULU] = cry_reverse(Cry_TapuBulu),
[SPECIES_TAPU_FINI] = cry_reverse(Cry_TapuFini),
[SPECIES_COSMOG] = cry_reverse(Cry_Cosmog),
[SPECIES_COSMOEM] = cry_reverse(Cry_Cosmoem),
[SPECIES_SOLGALEO] = cry_reverse(Cry_Solgaleo),
[SPECIES_LUNALA] = cry_reverse(Cry_Lunala),
[SPECIES_NIHILEGO] = cry_reverse(Cry_Nihilego),
[SPECIES_BUZZWOLE] = cry_reverse(Cry_Buzzwole),
[SPECIES_PHEROMOSA] = cry_reverse(Cry_Pheromosa),
[SPECIES_XURKITREE] = cry_reverse(Cry_Xurkitree),
[SPECIES_CELESTEELA] = cry_reverse(Cry_Celesteela),
[SPECIES_KARTANA] = cry_reverse(Cry_Kartana),
[SPECIES_GUZZLORD] = cry_reverse(Cry_Guzzlord),
[SPECIES_NECROZMA] = cry_reverse(Cry_Necrozma),
[SPECIES_MAGEARNA] = cry_reverse(Cry_Magearna),
[SPECIES_MARSHADOW] = cry_reverse(Cry_Marshadow),
[SPECIES_POIPOLE] = cry_reverse(Cry_Poipole),
[SPECIES_NAGANADEL] = cry_reverse(Cry_Naganadel),
[SPECIES_STAKATAKA] = cry_reverse(Cry_Stakataka),
[SPECIES_BLACEPHALON] = cry_reverse(Cry_Blacephalon),
[SPECIES_ZERAORA] = cry_reverse(Cry_Zeraora),
[SPECIES_MELTAN] = cry_reverse(Cry_Meltan),
[SPECIES_MELMETAL] = cry_reverse(Cry_Melmetal),
[SPECIES_GROOKEY] = cry_reverse(Cry_Grookey),
[SPECIES_THWACKEY] = cry_reverse(Cry_Thwackey),
[SPECIES_RILLABOOM] = cry_reverse(Cry_Rillaboom),
[SPECIES_SCORBUNNY] = cry_reverse(Cry_Scorbunny),
[SPECIES_RABOOT] = cry_reverse(Cry_Raboot),
[SPECIES_CINDERACE] = cry_reverse(Cry_Cinderace),
[SPECIES_SOBBLE] = cry_reverse(Cry_Sobble),
[SPECIES_DRIZZILE] = cry_reverse(Cry_Drizzile),
[SPECIES_INTELEON] = cry_reverse(Cry_Inteleon),
[SPECIES_SKWOVET] = cry_reverse(Cry_Skwovet),
[SPECIES_GREEDENT] = cry_reverse(Cry_Greedent),
[SPECIES_ROOKIDEE] = cry_reverse(Cry_Rookidee),
[SPECIES_CORVISQUIRE] = cry_reverse(Cry_Corvisquire),
[SPECIES_CORVIKNIGHT] = cry_reverse(Cry_Corviknight),
[SPECIES_BLIPBUG] = cry_reverse(Cry_Blipbug),
[SPECIES_DOTTLER] = cry_reverse(Cry_Dottler),
[SPECIES_ORBEETLE] = cry_reverse(Cry_Orbeetle),
[SPECIES_NICKIT] = cry_reverse(Cry_Nickit),
[SPECIES_THIEVUL] = cry_reverse(Cry_Thievul),
[SPECIES_GOSSIFLEUR] = cry_reverse(Cry_Gossifleur),
[SPECIES_ELDEGOSS] = cry_reverse(Cry_Eldegoss),
[SPECIES_WOOLOO] = cry_reverse(Cry_Wooloo),
[SPECIES_DUBWOOL] = cry_reverse(Cry_Dubwool),
[SPECIES_CHEWTLE] = cry_reverse(Cry_Chewtle),
[SPECIES_DREDNAW] = cry_reverse(Cry_Drednaw),
[SPECIES_YAMPER] = cry_reverse(Cry_Yamper),
[SPECIES_BOLTUND] = cry_reverse(Cry_Boltund),
[SPECIES_ROLYCOLY] = cry_reverse(Cry_Rolycoly),
[SPECIES_CARKOL] = cry_reverse(Cry_Carkol),
[SPECIES_COALOSSAL] = cry_reverse(Cry_Coalossal),
[SPECIES_APPLIN] = cry_reverse(Cry_Applin),
[SPECIES_FLAPPLE] = cry_reverse(Cry_Flapple),
[SPECIES_APPLETUN] = cry_reverse(Cry_Appletun),
[SPECIES_SILICOBRA] = cry_reverse(Cry_Silicobra),
[SPECIES_SANDACONDA] = cry_reverse(Cry_Sandaconda),
[SPECIES_CRAMORANT] = cry_reverse(Cry_Cramorant),
[SPECIES_ARROKUDA] = cry_reverse(Cry_Arrokuda),
[SPECIES_BARRASKEWDA] = cry_reverse(Cry_Barraskewda),
[SPECIES_TOXEL] = cry_reverse(Cry_Toxel),
[SPECIES_TOXTRICITY] = cry_reverse(Cry_Toxtricity),
[SPECIES_SIZZLIPEDE] = cry_reverse(Cry_Sizzlipede),
[SPECIES_CENTISKORCH] = cry_reverse(Cry_Centiskorch),
[SPECIES_CLOBBOPUS] = cry_reverse(Cry_Clobbopus),
[SPECIES_GRAPPLOCT] = cry_reverse(Cry_Grapploct),
[SPECIES_SINISTEA] = cry_reverse(Cry_Sinistea),
[SPECIES_POLTEAGEIST] = cry_reverse(Cry_Polteageist),
[SPECIES_HATENNA] = cry_reverse(Cry_Hatenna),
[SPECIES_HATTREM] = cry_reverse(Cry_Hattrem),
[SPECIES_HATTERENE] = cry_reverse(Cry_Hatterene),
[SPECIES_IMPIDIMP] = cry_reverse(Cry_Impidimp),
[SPECIES_MORGREM] = cry_reverse(Cry_Morgrem),
[SPECIES_GRIMMSNARL] = cry_reverse(Cry_Grimmsnarl),
[SPECIES_OBSTAGOON] = cry_reverse(Cry_Obstagoon),
[SPECIES_PERRSERKER] = cry_reverse(Cry_Perrserker),
[SPECIES_CURSOLA] = cry_reverse(Cry_Cursola),
[SPECIES_SIRFETCHD] = cry_reverse(Cry_Sirfetchd),
[SPECIES_MR_RIME] = cry_reverse(Cry_MrRime),
[SPECIES_RUNERIGUS] = cry_reverse(Cry_Runerigus),
[SPECIES_MILCERY] = cry_reverse(Cry_Milcery),
[SPECIES_ALCREMIE] = cry_reverse(Cry_Alcremie),
[SPECIES_FALINKS] = cry_reverse(Cry_Falinks),
[SPECIES_PINCURCHIN] = cry_reverse(Cry_Pincurchin),
[SPECIES_SNOM] = cry_reverse(Cry_Snom),
[SPECIES_FROSMOTH] = cry_reverse(Cry_Frosmoth),
[SPECIES_STONJOURNER] = cry_reverse(Cry_Stonjourner),
[SPECIES_EISCUE] = cry_reverse(Cry_Eiscue),
[SPECIES_INDEEDEE] = cry_reverse(Cry_Indeedee),
[SPECIES_MORPEKO] = cry_reverse(Cry_Morpeko),
[SPECIES_CUFANT] = cry_reverse(Cry_Cufant),
[SPECIES_COPPERAJAH] = cry_reverse(Cry_Copperajah),
[SPECIES_DRACOZOLT] = cry_reverse(Cry_Dracozolt),
[SPECIES_ARCTOZOLT] = cry_reverse(Cry_Arctozolt),
[SPECIES_DRACOVISH] = cry_reverse(Cry_Dracovish),
[SPECIES_ARCTOVISH] = cry_reverse(Cry_Arctovish),
[SPECIES_DURALUDON] = cry_reverse(Cry_Duraludon),
[SPECIES_DREEPY] = cry_reverse(Cry_Dreepy),
[SPECIES_DRAKLOAK] = cry_reverse(Cry_Drakloak),
[SPECIES_DRAGAPULT] = cry_reverse(Cry_Dragapult),
[SPECIES_ZACIAN] = cry_reverse(Cry_Zacian),
[SPECIES_ZAMAZENTA] = cry_reverse(Cry_Zamazenta),
[SPECIES_ETERNATUS] = cry_reverse(Cry_Eternatus),
[SPECIES_KUBFU] = cry_reverse(Cry_Kubfu),
[SPECIES_URSHIFU] = cry_reverse(Cry_Urshifu),
[SPECIES_ZARUDE] = cry_reverse(Cry_Zarude),
[SPECIES_REGIELEKI] = cry_reverse(Cry_Regieleki),
[SPECIES_REGIDRAGO] = cry_reverse(Cry_Regidrago),
[SPECIES_GLASTRIER] = cry_reverse(Cry_Glastrier),
[SPECIES_SPECTRIER] = cry_reverse(Cry_Spectrier),
[SPECIES_CALYREX] = cry_reverse(Cry_Calyrex),
[SPECIES_VENUSAUR_MEGA] = cry_reverse(Cry_VenusaurMega),
[SPECIES_CHARIZARD_MEGA_X] = cry_reverse(Cry_CharizardMegaX),
[SPECIES_CHARIZARD_MEGA_Y] = cry_reverse(Cry_CharizardMegaY),
[SPECIES_BLASTOISE_MEGA] = cry_reverse(Cry_BlastoiseMega),
[SPECIES_BEEDRILL_MEGA] = cry_reverse(Cry_BeedrillMega),
[SPECIES_PIDGEOT_MEGA] = cry_reverse(Cry_PidgeotMega),
[SPECIES_ALAKAZAM_MEGA] = cry_reverse(Cry_AlakazamMega),
[SPECIES_SLOWBRO_MEGA] = cry_reverse(Cry_SlowbroMega),
[SPECIES_GENGAR_MEGA] = cry_reverse(Cry_GengarMega),
[SPECIES_KANGASKHAN_MEGA] = cry_reverse(Cry_KangaskhanMega),
[SPECIES_PINSIR_MEGA] = cry_reverse(Cry_PinsirMega),
[SPECIES_GYARADOS_MEGA] = cry_reverse(Cry_GyaradosMega),
[SPECIES_AERODACTYL_MEGA] = cry_reverse(Cry_AerodactylMega),
[SPECIES_MEWTWO_MEGA_X] = cry_reverse(Cry_MewtwoMegaX),
[SPECIES_MEWTWO_MEGA_Y] = cry_reverse(Cry_MewtwoMegaY),
[SPECIES_AMPHAROS_MEGA] = cry_reverse(Cry_AmpharosMega),
[SPECIES_STEELIX_MEGA] = cry_reverse(Cry_SteelixMega),
[SPECIES_SCIZOR_MEGA] = cry_reverse(Cry_ScizorMega),
[SPECIES_HERACROSS_MEGA] = cry_reverse(Cry_HeracrossMega),
[SPECIES_HOUNDOOM_MEGA] = cry_reverse(Cry_HoundoomMega),
[SPECIES_TYRANITAR_MEGA] = cry_reverse(Cry_TyranitarMega),
[SPECIES_SCEPTILE_MEGA] = cry_reverse(Cry_SceptileMega),
[SPECIES_BLAZIKEN_MEGA] = cry_reverse(Cry_BlazikenMega),
[SPECIES_SWAMPERT_MEGA] = cry_reverse(Cry_SwampertMega),
[SPECIES_GARDEVOIR_MEGA] = cry_reverse(Cry_GardevoirMega),
[SPECIES_SABLEYE_MEGA] = cry_reverse(Cry_SableyeMega),
[SPECIES_MAWILE_MEGA] = cry_reverse(Cry_MawileMega),
[SPECIES_AGGRON_MEGA] = cry_reverse(Cry_AggronMega),
[SPECIES_MEDICHAM_MEGA] = cry_reverse(Cry_MedichamMega),
[SPECIES_MANECTRIC_MEGA] = cry_reverse(Cry_ManectricMega),
[SPECIES_SHARPEDO_MEGA] = cry_reverse(Cry_SharpedoMega),
[SPECIES_CAMERUPT_MEGA] = cry_reverse(Cry_CameruptMega),
[SPECIES_ALTARIA_MEGA] = cry_reverse(Cry_AltariaMega),
[SPECIES_BANETTE_MEGA] = cry_reverse(Cry_BanetteMega),
[SPECIES_ABSOL_MEGA] = cry_reverse(Cry_AbsolMega),
[SPECIES_GLALIE_MEGA] = cry_reverse(Cry_GlalieMega),
[SPECIES_SALAMENCE_MEGA] = cry_reverse(Cry_SalamenceMega),
[SPECIES_METAGROSS_MEGA] = cry_reverse(Cry_MetagrossMega),
[SPECIES_LATIAS_MEGA] = cry_reverse(Cry_LatiasMega),
[SPECIES_LATIOS_MEGA] = cry_reverse(Cry_LatiosMega),
[SPECIES_LOPUNNY_MEGA] = cry_reverse(Cry_LopunnyMega),
[SPECIES_GARCHOMP_MEGA] = cry_reverse(Cry_GarchompMega),
[SPECIES_LUCARIO_MEGA] = cry_reverse(Cry_LucarioMega),
[SPECIES_ABOMASNOW_MEGA] = cry_reverse(Cry_AbomasnowMega),
[SPECIES_GALLADE_MEGA] = cry_reverse(Cry_GalladeMega),
[SPECIES_AUDINO_MEGA] = cry_reverse(Cry_AudinoMega),
[SPECIES_DIANCIE_MEGA] = cry_reverse(Cry_DiancieMega),
[SPECIES_RAYQUAZA_MEGA] = cry_reverse(Cry_RayquazaMega),
[SPECIES_KYOGRE_PRIMAL] = cry_reverse(Cry_KyogrePrimal),
[SPECIES_GROUDON_PRIMAL] = cry_reverse(Cry_GroudonPrimal),
[SPECIES_RATTATA_ALOLAN] = cry_reverse(Cry_Rattata),
[SPECIES_RATICATE_ALOLAN] = cry_reverse(Cry_Raticate),
[SPECIES_RAICHU_ALOLAN] = cry_reverse(Cry_Raichu),
[SPECIES_SANDSHREW_ALOLAN] = cry_reverse(Cry_Sandshrew),
[SPECIES_SANDSLASH_ALOLAN] = cry_reverse(Cry_Sandslash),
[SPECIES_VULPIX_ALOLAN] = cry_reverse(Cry_Vulpix),
[SPECIES_NINETALES_ALOLAN] = cry_reverse(Cry_Ninetales),
[SPECIES_DIGLETT_ALOLAN] = cry_reverse(Cry_Diglett),
[SPECIES_DUGTRIO_ALOLAN] = cry_reverse(Cry_Dugtrio),
[SPECIES_MEOWTH_ALOLAN] = cry_reverse(Cry_Meowth),
[SPECIES_PERSIAN_ALOLAN] = cry_reverse(Cry_Persian),
[SPECIES_GEODUDE_ALOLAN] = cry_reverse(Cry_Geodude),
[SPECIES_GRAVELER_ALOLAN] = cry_reverse(Cry_Graveler),
[SPECIES_GOLEM_ALOLAN] = cry_reverse(Cry_Golem),
[SPECIES_GRIMER_ALOLAN] = cry_reverse(Cry_Grimer),
[SPECIES_MUK_ALOLAN] = cry_reverse(Cry_Muk),
[SPECIES_EXEGGUTOR_ALOLAN] = cry_reverse(Cry_Exeggutor),
[SPECIES_MAROWAK_ALOLAN] = cry_reverse(Cry_Marowak),
[SPECIES_MEOWTH_GALARIAN] = cry_reverse(Cry_Meowth),
[SPECIES_PONYTA_GALARIAN] = cry_reverse(Cry_Ponyta),
[SPECIES_RAPIDASH_GALARIAN] = cry_reverse(Cry_Rapidash),
[SPECIES_SLOWPOKE_GALARIAN] = cry_reverse(Cry_SlowpokeGalarian),
[SPECIES_SLOWBRO_GALARIAN] = cry_reverse(Cry_Slowbro),
[SPECIES_FARFETCHD_GALARIAN] = cry_reverse(Cry_Farfetchd),
[SPECIES_WEEZING_GALARIAN] = cry_reverse(Cry_Weezing),
[SPECIES_MR_MIME_GALARIAN] = cry_reverse(Cry_MrMime),
[SPECIES_ARTICUNO_GALARIAN] = cry_reverse(Cry_Articuno),
[SPECIES_ZAPDOS_GALARIAN] = cry_reverse(Cry_Zapdos),
[SPECIES_MOLTRES_GALARIAN] = cry_reverse(Cry_Moltres),
[SPECIES_SLOWKING_GALARIAN] = cry_reverse(Cry_Slowking),
[SPECIES_CORSOLA_GALARIAN] = cry_reverse(Cry_Corsola),
[SPECIES_ZIGZAGOON_GALARIAN] = cry_reverse(Cry_Zigzagoon),
[SPECIES_LINOONE_GALARIAN] = cry_reverse(Cry_Linoone),
[SPECIES_DARUMAKA_GALARIAN] = cry_reverse(Cry_Darumaka),
[SPECIES_DARMANITAN_GALARIAN] = cry_reverse(Cry_Darmanitan),
[SPECIES_YAMASK_GALARIAN] = cry_reverse(Cry_Yamask),
[SPECIES_STUNFISK_GALARIAN] = cry_reverse(Cry_Stunfisk),
[SPECIES_PIKACHU_COSPLAY] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_ROCK_STAR] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_BELLE] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_POP_STAR] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_PH_D] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_LIBRE] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_ORIGINAL_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_HOENN_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_SINNOH_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_UNOVA_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_KALOS_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_ALOLA_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_PARTNER_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PIKACHU_WORLD_CAP] = cry_reverse(Cry_Pikachu),
[SPECIES_PICHU_SPIKY_EARED] = cry_reverse(Cry_Pichu),
[SPECIES_UNOWN_B] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_C] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_D] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_E] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_F] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_G] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_H] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_I] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_J] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_K] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_L] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_M] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_N] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_O] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_P] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_Q] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_R] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_S] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_T] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_U] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_V] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_W] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_X] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_Y] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_Z] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_EMARK] = cry_reverse(Cry_Unown),
[SPECIES_UNOWN_QMARK] = cry_reverse(Cry_Unown),
[SPECIES_CASTFORM_SUNNY] = cry_reverse(Cry_Castform),
[SPECIES_CASTFORM_RAINY] = cry_reverse(Cry_Castform),
[SPECIES_CASTFORM_SNOWY] = cry_reverse(Cry_Castform),
[SPECIES_DEOXYS_ATTACK] = cry_reverse(Cry_Deoxys),
[SPECIES_DEOXYS_DEFENSE] = cry_reverse(Cry_Deoxys),
[SPECIES_DEOXYS_SPEED] = cry_reverse(Cry_Deoxys),
[SPECIES_BURMY_SANDY_CLOAK] = cry_reverse(Cry_Burmy),
[SPECIES_BURMY_TRASH_CLOAK] = cry_reverse(Cry_Burmy),
[SPECIES_WORMADAM_SANDY_CLOAK] = cry_reverse(Cry_Wormadam),
[SPECIES_WORMADAM_TRASH_CLOAK] = cry_reverse(Cry_Wormadam),
[SPECIES_CHERRIM_SUNSHINE] = cry_reverse(Cry_Cherrim),
[SPECIES_SHELLOS_EAST_SEA] = cry_reverse(Cry_Shellos),
[SPECIES_GASTRODON_EAST_SEA] = cry_reverse(Cry_Gastrodon),
[SPECIES_ROTOM_HEAT] = cry_reverse(Cry_Rotom),
[SPECIES_ROTOM_WASH] = cry_reverse(Cry_Rotom),
[SPECIES_ROTOM_FROST] = cry_reverse(Cry_Rotom),
[SPECIES_ROTOM_FAN] = cry_reverse(Cry_Rotom),
[SPECIES_ROTOM_MOW] = cry_reverse(Cry_Rotom),
[SPECIES_GIRATINA_ORIGIN] = cry_reverse(Cry_Giratina),
[SPECIES_SHAYMIN_SKY] = cry_reverse(Cry_ShayminSky),
[SPECIES_ARCEUS_FIGHTING] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_FLYING] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_POISON] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_GROUND] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_ROCK] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_BUG] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_GHOST] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_STEEL] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_FIRE] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_WATER] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_GRASS] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_ELECTRIC] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_PSYCHIC] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_ICE] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_DRAGON] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_DARK] = cry_reverse(Cry_Arceus),
[SPECIES_ARCEUS_FAIRY] = cry_reverse(Cry_Arceus),
[SPECIES_BASCULIN_BLUE_STRIPED] = cry_reverse(Cry_Basculin),
[SPECIES_DARMANITAN_ZEN_MODE] = cry_reverse(Cry_Darmanitan),
[SPECIES_DARMANITAN_ZEN_MODE_GALARIAN] = cry_reverse(Cry_Darmanitan),
[SPECIES_DEERLING_SUMMER] = cry_reverse(Cry_Deerling),
[SPECIES_DEERLING_AUTUMN] = cry_reverse(Cry_Deerling),
[SPECIES_DEERLING_WINTER] = cry_reverse(Cry_Deerling),
[SPECIES_SAWSBUCK_SUMMER] = cry_reverse(Cry_Sawsbuck),
[SPECIES_SAWSBUCK_AUTUMN] = cry_reverse(Cry_Sawsbuck),
[SPECIES_SAWSBUCK_WINTER] = cry_reverse(Cry_Sawsbuck),
[SPECIES_TORNADUS_THERIAN] = cry_reverse(Cry_TornadusTherian),
[SPECIES_THUNDURUS_THERIAN] = cry_reverse(Cry_ThundurusTherian),
[SPECIES_LANDORUS_THERIAN] = cry_reverse(Cry_LandorusTherian),
[SPECIES_KYUREM_WHITE] = cry_reverse(Cry_KyuremWhite),
[SPECIES_KYUREM_BLACK] = cry_reverse(Cry_KyuremBlack),
[SPECIES_KELDEO_RESOLUTE] = cry_reverse(Cry_Keldeo),
[SPECIES_MELOETTA_PIROUETTE] = cry_reverse(Cry_Meloetta),
[SPECIES_GENESECT_DOUSE_DRIVE] = cry_reverse(Cry_Genesect),
[SPECIES_GENESECT_SHOCK_DRIVE] = cry_reverse(Cry_Genesect),
[SPECIES_GENESECT_BURN_DRIVE] = cry_reverse(Cry_Genesect),
[SPECIES_GENESECT_CHILL_DRIVE] = cry_reverse(Cry_Genesect),
[SPECIES_GRENINJA_BATTLE_BOND] = cry_reverse(Cry_Greninja),
[SPECIES_GRENINJA_ASH] = cry_reverse(Cry_Greninja),
[SPECIES_VIVILLON_POLAR] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_TUNDRA] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_CONTINENTAL] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_GARDEN] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_ELEGANT] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_MEADOW] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_MODERN] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_MARINE] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_ARCHIPELAGO] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_HIGH_PLAINS] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_SANDSTORM] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_RIVER] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_MONSOON] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_SAVANNA] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_SUN] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_OCEAN] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_JUNGLE] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_FANCY] = cry_reverse(Cry_Vivillon),
[SPECIES_VIVILLON_POKE_BALL] = cry_reverse(Cry_Vivillon),
[SPECIES_FLABEBE_YELLOW_FLOWER] = cry_reverse(Cry_Flabebe),
[SPECIES_FLABEBE_ORANGE_FLOWER] = cry_reverse(Cry_Flabebe),
[SPECIES_FLABEBE_BLUE_FLOWER] = cry_reverse(Cry_Flabebe),
[SPECIES_FLABEBE_WHITE_FLOWER] = cry_reverse(Cry_Flabebe),
[SPECIES_FLOETTE_YELLOW_FLOWER] = cry_reverse(Cry_Floette),
[SPECIES_FLOETTE_ORANGE_FLOWER] = cry_reverse(Cry_Floette),
[SPECIES_FLOETTE_BLUE_FLOWER] = cry_reverse(Cry_Floette),
[SPECIES_FLOETTE_WHITE_FLOWER] = cry_reverse(Cry_Floette),
[SPECIES_FLOETTE_ETERNAL_FLOWER] = cry_reverse(Cry_FloetteEternalFlower),
[SPECIES_FLORGES_YELLOW_FLOWER] = cry_reverse(Cry_Florges),
[SPECIES_FLORGES_ORANGE_FLOWER] = cry_reverse(Cry_Florges),
[SPECIES_FLORGES_BLUE_FLOWER] = cry_reverse(Cry_Florges),
[SPECIES_FLORGES_WHITE_FLOWER] = cry_reverse(Cry_Florges),
[SPECIES_FURFROU_HEART_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_STAR_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_DIAMOND_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_DEBUTANTE_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_MATRON_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_DANDY_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_LA_REINE_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_KABUKI_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_FURFROU_PHARAOH_TRIM] = cry_reverse(Cry_Furfrou),
[SPECIES_MEOWSTIC_FEMALE] = cry_reverse(Cry_Meowstic),
[SPECIES_AEGISLASH_BLADE] = cry_reverse(Cry_Aegislash),
[SPECIES_PUMPKABOO_SMALL] = cry_reverse(Cry_Pumpkaboo),
[SPECIES_PUMPKABOO_LARGE] = cry_reverse(Cry_Pumpkaboo),
[SPECIES_PUMPKABOO_SUPER] = cry_reverse(Cry_PumpkabooSuper),
[SPECIES_GOURGEIST_SMALL] = cry_reverse(Cry_Gourgeist),
[SPECIES_GOURGEIST_LARGE] = cry_reverse(Cry_Gourgeist),
[SPECIES_GOURGEIST_SUPER] = cry_reverse(Cry_GourgeistSuper),
[SPECIES_XERNEAS_ACTIVE] = cry_reverse(Cry_Xerneas),
[SPECIES_ZYGARDE_10] = cry_reverse(Cry_Zygarde10),
[SPECIES_ZYGARDE_10_POWER_CONSTRUCT] = cry_reverse(Cry_Zygarde10),
[SPECIES_ZYGARDE_50_POWER_CONSTRUCT] = cry_reverse(Cry_Zygarde),
[SPECIES_ZYGARDE_COMPLETE] = cry_reverse(Cry_ZygardeComplete),
[SPECIES_HOOPA_UNBOUND] = cry_reverse(Cry_HoopaUnbound),
[SPECIES_ORICORIO_POM_POM] = cry_reverse(Cry_OricorioPomPom),
[SPECIES_ORICORIO_PAU] = cry_reverse(Cry_OricorioPau),
[SPECIES_ORICORIO_SENSU] = cry_reverse(Cry_OricorioSensu),
[SPECIES_ROCKRUFF_OWN_TEMPO] = cry_reverse(Cry_Rockruff),
[SPECIES_LYCANROC_MIDNIGHT] = cry_reverse(Cry_LycanrocMidnight),
[SPECIES_LYCANROC_DUSK] = cry_reverse(Cry_LycanrocDusk),
[SPECIES_WISHIWASHI_SCHOOL] = cry_reverse(Cry_WishiwashiSchool),
[SPECIES_SILVALLY_FIGHTING] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_FLYING] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_POISON] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_GROUND] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_ROCK] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_BUG] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_GHOST] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_STEEL] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_FIRE] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_WATER] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_GRASS] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_ELECTRIC] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_PSYCHIC] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_ICE] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_DRAGON] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_DARK] = cry_reverse(Cry_Silvally),
[SPECIES_SILVALLY_FAIRY] = cry_reverse(Cry_Silvally),
[SPECIES_MINIOR_METEOR_ORANGE] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_METEOR_YELLOW] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_METEOR_GREEN] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_METEOR_BLUE] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_METEOR_INDIGO] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_METEOR_VIOLET] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_CORE_RED] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_CORE_ORANGE] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_CORE_YELLOW] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_CORE_GREEN] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_CORE_BLUE] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_CORE_INDIGO] = cry_reverse(Cry_Minior),
[SPECIES_MINIOR_CORE_VIOLET] = cry_reverse(Cry_Minior),
[SPECIES_MIMIKYU_BUSTED] = cry_reverse(Cry_Mimikyu),
[SPECIES_NECROZMA_DUSK_MANE] = cry_reverse(Cry_NecrozmaDuskMane),
[SPECIES_NECROZMA_DAWN_WINGS] = cry_reverse(Cry_NecrozmaDawnWings),
[SPECIES_NECROZMA_ULTRA] = cry_reverse(Cry_NecrozmaUltra),
[SPECIES_MAGEARNA_ORIGINAL_COLOR] = cry_reverse(Cry_Magearna),
[SPECIES_CRAMORANT_GULPING] = cry_reverse(Cry_Cramorant),
[SPECIES_CRAMORANT_GORGING] = cry_reverse(Cry_Cramorant),
[SPECIES_TOXTRICITY_LOW_KEY] = cry_reverse(Cry_ToxtricityLowKey),
[SPECIES_SINISTEA_ANTIQUE] = cry_reverse(Cry_Sinistea),
[SPECIES_POLTEAGEIST_ANTIQUE] = cry_reverse(Cry_Polteageist),
[SPECIES_ALCREMIE_RUBY_CREAM] = cry_reverse(Cry_Alcremie),
[SPECIES_ALCREMIE_MATCHA_CREAM] = cry_reverse(Cry_Alcremie),
[SPECIES_ALCREMIE_MINT_CREAM] = cry_reverse(Cry_Alcremie),
[SPECIES_ALCREMIE_LEMON_CREAM] = cry_reverse(Cry_Alcremie),
[SPECIES_ALCREMIE_SALTED_CREAM] = cry_reverse(Cry_Alcremie),
[SPECIES_ALCREMIE_RUBY_SWIRL] = cry_reverse(Cry_Alcremie),
[SPECIES_ALCREMIE_CARAMEL_SWIRL] = cry_reverse(Cry_Alcremie),
[SPECIES_ALCREMIE_RAINBOW_SWIRL] = cry_reverse(Cry_Alcremie),
[SPECIES_EISCUE_NOICE_FACE] = cry_reverse(Cry_EiscueNoiceFace),
[SPECIES_INDEEDEE_FEMALE] = cry_reverse(Cry_IndeedeeFemale),
[SPECIES_MORPEKO_HANGRY] = cry_reverse(Cry_MorpekoHangry),
[SPECIES_ZACIAN_CROWNED_SWORD] = cry_reverse(Cry_ZacianCrownedSword),
[SPECIES_ZAMAZENTA_CROWNED_SHIELD] = cry_reverse(Cry_ZamazentaCrownedShield),
[SPECIES_ETERNATUS_ETERNAMAX] = cry_reverse(Cry_EternatusEternamax),
[SPECIES_URSHIFU_RAPID_STRIKE_STYLE] = cry_reverse(Cry_UrshifuRapidStrikeStyle),
[SPECIES_ZARUDE_DADA] = cry_reverse(Cry_Zarude),
[SPECIES_CALYREX_ICE_RIDER] = cry_reverse(Cry_CalyrexIceRider),
[SPECIES_CALYREX_SHADOW_RIDER] = cry_reverse(Cry_CalyrexShadowRider),
};