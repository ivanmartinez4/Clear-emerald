const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_BULBASAUR]             = {{EVO_LEVEL, 20, SPECIES_IVYSAUR}},
    [SPECIES_IVYSAUR]               = {{EVO_LEVEL, 40, SPECIES_VENUSAUR}},
    [SPECIES_CHARMANDER]            = {{EVO_LEVEL, 20, SPECIES_CHARMELEON}},
    [SPECIES_CHARMELEON]            = {{EVO_LEVEL, 40, SPECIES_CHARIZARD}},
    [SPECIES_SQUIRTLE]              = {{EVO_LEVEL, 20, SPECIES_WARTORTLE}},
    [SPECIES_WARTORTLE]             = {{EVO_LEVEL, 40, SPECIES_BLASTOISE}},
    [SPECIES_CATERPIE]              = {{EVO_LEVEL, 15, SPECIES_METAPOD}},
    [SPECIES_METAPOD]               = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_VENONAT, SPECIES_BUTTERFREE}},
    [SPECIES_WEEDLE]                = {{EVO_LEVEL, 15, SPECIES_KAKUNA}},
    [SPECIES_KAKUNA]                = {{EVO_LEVEL, 30, SPECIES_BEEDRILL}},
    [SPECIES_PIDGEY]                = {{EVO_LEVEL, 20, SPECIES_PIDGEOTTO}},
    [SPECIES_PIDGEOTTO]             = {{EVO_LEVEL, 40, SPECIES_PIDGEOT}},
    [SPECIES_RATTATA]               = {{EVO_LEVEL, 30, SPECIES_RATICATE}},
    [SPECIES_SPEAROW]               = {{EVO_LEVEL, 30, SPECIES_FEAROW}},
    [SPECIES_EKANS]                 = {{EVO_LEVEL, 30, SPECIES_ARBOK}},
    [SPECIES_PIKACHU]               = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU},
                                       {EVO_ITEM, ITEM_STRANGE_SOUVENIR, SPECIES_RAICHU_ALOLAN}},
    [SPECIES_SANDSHREW]             = {{EVO_LEVEL, 30, SPECIES_SANDSLASH}},
    [SPECIES_NIDORAN_F]             = {{EVO_LEVEL, 20, SPECIES_NIDORINA}},
    [SPECIES_NIDORINA]              = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}},
    [SPECIES_NIDORAN_M]             = {{EVO_LEVEL, 20, SPECIES_NIDORINO}},
    [SPECIES_NIDORINO]              = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}},
    [SPECIES_CLEFAIRY]              = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}},
    [SPECIES_VULPIX]                = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_JIGGLYPUFF]            = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}},
    [SPECIES_ZUBAT]                 = {{EVO_LEVEL, 30, SPECIES_GOLBAT}},
    [SPECIES_GOLBAT]                = {{EVO_FRIENDSHIP, 0, SPECIES_CROBAT}},
    [SPECIES_ODDISH]                = {{EVO_LEVEL, 20, SPECIES_GLOOM}},
    [SPECIES_GLOOM]                 = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                                       {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}},
    [SPECIES_PARAS]                 = {{EVO_LEVEL, 30, SPECIES_PARASECT}},
    [SPECIES_VENONAT]               = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_METAPOD, SPECIES_VENOMOTH}},
    [SPECIES_DIGLETT]               = {{EVO_LEVEL, 30, SPECIES_DUGTRIO}},
    [SPECIES_MEOWTH]                = {{EVO_LEVEL, 30, SPECIES_PERSIAN}},
    [SPECIES_PSYDUCK]               = {{EVO_LEVEL, 30, SPECIES_GOLDUCK}},
    [SPECIES_MANKEY]                = {{EVO_LEVEL, 30, SPECIES_PRIMEAPE}},
    [SPECIES_GROWLITHE]             = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_POLIWAG]               = {{EVO_LEVEL, 20, SPECIES_POLIWHIRL}},
    [SPECIES_POLIWHIRL]             = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                                       {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}},
    [SPECIES_ABRA]                  = {{EVO_LEVEL, 20, SPECIES_KADABRA}},
    [SPECIES_KADABRA]               = {{EVO_ITEM, ITEM_TWISTED_SPOON, SPECIES_ALAKAZAM}},
    [SPECIES_MACHOP]                = {{EVO_LEVEL, 20, SPECIES_MACHOKE}},
    [SPECIES_MACHOKE]               = {{EVO_LEVEL, 40, SPECIES_MACHAMP}},
    [SPECIES_BELLSPROUT]            = {{EVO_LEVEL, 20, SPECIES_WEEPINBELL}},
    [SPECIES_WEEPINBELL]            = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}},
    [SPECIES_TENTACOOL]             = {{EVO_LEVEL, 30, SPECIES_TENTACRUEL}},
    [SPECIES_GEODUDE]               = {{EVO_LEVEL, 20, SPECIES_GRAVELER}},
    [SPECIES_GRAVELER]              = {{EVO_LEVEL, 40, SPECIES_GOLEM}},
    [SPECIES_PONYTA]                = {{EVO_LEVEL, 30, SPECIES_RAPIDASH}},
    [SPECIES_SLOWPOKE]              = {{EVO_LEVEL, 30, SPECIES_SLOWBRO},
                                       {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}},
    [SPECIES_MAGNEMITE]             = {{EVO_LEVEL, 20, SPECIES_MAGNETON}},
    [SPECIES_MAGNETON]              = {{EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_MAGNEZONE}},
    [SPECIES_DODUO]                 = {{EVO_LEVEL, 30, SPECIES_DODRIO}},
    [SPECIES_SEEL]                  = {{EVO_LEVEL, 30, SPECIES_DEWGONG}},
    [SPECIES_GRIMER]                = {{EVO_LEVEL, 30, SPECIES_MUK}},
    [SPECIES_SHELLDER]              = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}},
    [SPECIES_GASTLY]                = {{EVO_LEVEL, 20, SPECIES_HAUNTER}},
    [SPECIES_HAUNTER]               = {{EVO_LEVEL, 40, SPECIES_GENGAR}},
    [SPECIES_ONIX]                  = {{EVO_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}},
    [SPECIES_DROWZEE]               = {{EVO_LEVEL, 30, SPECIES_HYPNO}},
    [SPECIES_KRABBY]                = {{EVO_LEVEL, 30, SPECIES_KINGLER}},
    [SPECIES_VOLTORB]               = {{EVO_LEVEL, 30, SPECIES_ELECTRODE}},
    [SPECIES_EXEGGCUTE]             = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR},
                                       {EVO_ITEM, ITEM_STRANGE_SOUVENIR, SPECIES_EXEGGUTOR_ALOLAN}},
    [SPECIES_CUBONE]                = {{EVO_LEVEL, 30, SPECIES_MAROWAK},
                                       {EVO_ITEM, ITEM_STRANGE_SOUVENIR, SPECIES_MAROWAK_ALOLAN}},
    [SPECIES_LICKITUNG]             = {{EVO_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY}},
    [SPECIES_KOFFING]               = {{EVO_LEVEL, 30, SPECIES_WEEZING}},
    [SPECIES_RHYHORN]               = {{EVO_LEVEL, 20, SPECIES_RHYDON}},
    [SPECIES_RHYDON]                = {{EVO_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR}},
    [SPECIES_CHANSEY]               = {{EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}},
    [SPECIES_TANGELA]               = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}},
    [SPECIES_HORSEA]                = {{EVO_LEVEL, 20, SPECIES_SEADRA}},
    [SPECIES_SEADRA]                = {{EVO_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}},
    [SPECIES_GOLDEEN]               = {{EVO_LEVEL, 30, SPECIES_SEAKING}},
    [SPECIES_STARYU]                = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_STANTLER]              = {{EVO_ITEM_HOLD_DAY, ITEM_SNOWBALL, SPECIES_WYRDEER}},
    [SPECIES_SCYTHER]               = {{EVO_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR},
                                       {EVO_ITEM_HOLD_NIGHT, ITEM_ROCKY_HELMET, SPECIES_KLEAVOR}},
    [SPECIES_ELECTABUZZ]            = {{EVO_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}},
    [SPECIES_MAGMAR]                = {{EVO_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}},
    [SPECIES_MAGIKARP]              = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_DRAGONAIR, SPECIES_GYARADOS}},
    [SPECIES_EEVEE]                 = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                                       {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                                       {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                                       {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                                       {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
                                       {EVO_SPECIFIC_MAP, MAP_PETALBURG_WOODS, SPECIES_LEAFEON},
                                       {EVO_SPECIFIC_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_GLACEON},
                                       {EVO_MOVE_TYPE, TYPE_FAIRY, SPECIES_SYLVEON}},
    [SPECIES_PORYGON]               = {{EVO_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2}},
    [SPECIES_OMANYTE]               = {{EVO_LEVEL, 30, SPECIES_OMASTAR}},
    [SPECIES_KABUTO]                = {{EVO_LEVEL, 30, SPECIES_KABUTOPS}},
    [SPECIES_DRATINI]               = {{EVO_LEVEL, 30, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]             = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_MAGIKARP, SPECIES_DRAGONITE}},
    [SPECIES_CHIKORITA]             = {{EVO_LEVEL, 20, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]               = {{EVO_LEVEL, 40, SPECIES_MEGANIUM}},
    [SPECIES_CYNDAQUIL]             = {{EVO_LEVEL, 20, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]               = {{EVO_LEVEL, 40, SPECIES_TYPHLOSION}},
    [SPECIES_TOTODILE]              = {{EVO_LEVEL, 20, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]              = {{EVO_LEVEL, 40, SPECIES_FERALIGATR}},
    [SPECIES_SENTRET]               = {{EVO_LEVEL, 15, SPECIES_FURRET}},
    [SPECIES_HOOTHOOT]              = {{EVO_LEVEL, 30, SPECIES_NOCTOWL}},
    [SPECIES_LEDYBA]                = {{EVO_LEVEL, 15, SPECIES_LEDIAN}},
    [SPECIES_SPINARAK]              = {{EVO_LEVEL, 20, SPECIES_ARIADOS}},
    [SPECIES_CHINCHOU]              = {{EVO_LEVEL, 30, SPECIES_LANTURN}},
    [SPECIES_PICHU]                 = {{EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}},
    [SPECIES_CLEFFA]                = {{EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}},
    [SPECIES_IGGLYBUFF]             = {{EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}},
    [SPECIES_TOGEPI]                = {{EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}},
    [SPECIES_TOGETIC]               = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS}},
    [SPECIES_NATU]                  = {{EVO_LEVEL, 30, SPECIES_XATU}},
    [SPECIES_MAREEP]                = {{EVO_LEVEL, 20, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]               = {{EVO_LEVEL, 40, SPECIES_AMPHAROS}},
    [SPECIES_MARILL]                = {{EVO_LEVEL, 30, SPECIES_AZUMARILL}},
    [SPECIES_HOPPIP]                = {{EVO_LEVEL, 20, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]              = {{EVO_LEVEL, 40, SPECIES_JUMPLUFF}},
    [SPECIES_AIPOM]                 = {{EVO_MOVE, MOVE_DOUBLE_HIT, SPECIES_AMBIPOM}},
    [SPECIES_SUNKERN]               = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}},
    [SPECIES_YANMA]                 = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_YANMEGA}},
    [SPECIES_WOOPER]                = {{EVO_LEVEL, 30, SPECIES_QUAGSIRE}},
    [SPECIES_MURKROW]               = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW}},
    [SPECIES_MISDREAVUS]            = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_MISMAGIUS}},
    [SPECIES_PINECO]                = {{EVO_LEVEL, 30, SPECIES_FORRETRESS}},
    [SPECIES_GLIGAR]                = {{EVO_ITEM_HOLD_NIGHT, ITEM_RAZOR_FANG, SPECIES_GLISCOR}},
    [SPECIES_SNUBBULL]              = {{EVO_LEVEL, 30, SPECIES_GRANBULL}},
    [SPECIES_SNEASEL]               = {{EVO_ITEM_HOLD_NIGHT, ITEM_RAZOR_CLAW, SPECIES_WEAVILE},
                                       {EVO_ITEM_FEMALE , ITEM_BLACK_SLUDGE, SPECIES_SNEASLER}},
    [SPECIES_TEDDIURSA]             = {{EVO_LEVEL, 30, SPECIES_URSARING}},
    [SPECIES_SLUGMA]                = {{EVO_LEVEL, 30, SPECIES_MAGCARGO}},
    [SPECIES_SWINUB]                = {{EVO_LEVEL, 20, SPECIES_PILOSWINE}},
    [SPECIES_PILOSWINE]             = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_MAMOSWINE}},
    [SPECIES_REMORAID]              = {{EVO_LEVEL, 30, SPECIES_OCTILLERY}},
    [SPECIES_HOUNDOUR]              = {{EVO_LEVEL, 30, SPECIES_HOUNDOOM}},
    [SPECIES_PHANPY]                = {{EVO_LEVEL, 30, SPECIES_DONPHAN}},
    [SPECIES_PORYGON2]              = {{EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}},
    [SPECIES_TYROGUE]               = {{EVO_LEVEL_ATK_LT_DEF, 30, SPECIES_HITMONCHAN},
                                       {EVO_LEVEL_ATK_GT_DEF, 30, SPECIES_HITMONLEE},
                                       {EVO_LEVEL_ATK_EQ_DEF, 30, SPECIES_HITMONTOP}},
    [SPECIES_SMOOCHUM]              = {{EVO_LEVEL, 30, SPECIES_JYNX}},
    [SPECIES_ELEKID]                = {{EVO_LEVEL, 20, SPECIES_ELECTABUZZ}},
    [SPECIES_MAGBY]                 = {{EVO_LEVEL, 20, SPECIES_MAGMAR}},
    [SPECIES_LARVITAR]              = {{EVO_LEVEL, 30, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]               = {{EVO_LEVEL, 50, SPECIES_TYRANITAR}},
    [SPECIES_TREECKO]               = {{EVO_LEVEL, 20, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]               = {{EVO_LEVEL, 40, SPECIES_SCEPTILE}},
    [SPECIES_TORCHIC]               = {{EVO_LEVEL, 20, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]             = {{EVO_LEVEL, 40, SPECIES_BLAZIKEN}},
    [SPECIES_MUDKIP]                = {{EVO_LEVEL, 20, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]             = {{EVO_LEVEL, 40, SPECIES_SWAMPERT}},
    [SPECIES_POOCHYENA]             = {{EVO_LEVEL, 30, SPECIES_MIGHTYENA}},
    [SPECIES_ZIGZAGOON]             = {{EVO_LEVEL, 20, SPECIES_LINOONE}},
    [SPECIES_WURMPLE]               = {{EVO_LEVEL_SILCOON, 15, SPECIES_SILCOON},
                                       {EVO_LEVEL_CASCOON, 15, SPECIES_CASCOON}},
    [SPECIES_SILCOON]               = {{EVO_LEVEL, 30, SPECIES_BEAUTIFLY}},
    [SPECIES_CASCOON]               = {{EVO_LEVEL, 30, SPECIES_DUSTOX}},
    [SPECIES_LOTAD]                 = {{EVO_LEVEL, 20, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]                = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}},
    [SPECIES_SEEDOT]                = {{EVO_LEVEL, 20, SPECIES_NUZLEAF}},
    [SPECIES_NUZLEAF]               = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}},
    [SPECIES_NINCADA]               = {{EVO_LEVEL_NINJASK, 30, SPECIES_NINJASK},
                                       {EVO_LEVEL_SHEDINJA, 30, SPECIES_SHEDINJA}},
    [SPECIES_TAILLOW]               = {{EVO_LEVEL, 30, SPECIES_SWELLOW}},
    [SPECIES_SHROOMISH]             = {{EVO_LEVEL, 30, SPECIES_BRELOOM}},
    [SPECIES_WINGULL]               = {{EVO_LEVEL, 30, SPECIES_PELIPPER}},
    [SPECIES_SURSKIT]               = {{EVO_LEVEL, 30, SPECIES_MASQUERAIN}},
    [SPECIES_WAILMER]               = {{EVO_LEVEL, 30, SPECIES_WAILORD}},
    [SPECIES_SKITTY]                = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_BALTOY]                = {{EVO_LEVEL, 30, SPECIES_CLAYDOL}},
    [SPECIES_NOSEPASS]              = {{EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_PROBOPASS}},
    [SPECIES_BARBOACH]              = {{EVO_LEVEL, 30, SPECIES_WHISCASH}},
    [SPECIES_CORPHISH]              = {{EVO_LEVEL, 30, SPECIES_CRAWDAUNT}},
    [SPECIES_FEEBAS]                = {{EVO_BEAUTY, 170, SPECIES_MILOTIC}},
    [SPECIES_CARVANHA]              = {{EVO_LEVEL, 30, SPECIES_SHARPEDO}},
    [SPECIES_TRAPINCH]              = {{EVO_LEVEL, 20, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]               = {{EVO_LEVEL, 40, SPECIES_FLYGON}},
    [SPECIES_MAKUHITA]              = {{EVO_LEVEL, 30, SPECIES_HARIYAMA}},
    [SPECIES_ELECTRIKE]             = {{EVO_LEVEL, 30, SPECIES_MANECTRIC}},
    [SPECIES_NUMEL]                 = {{EVO_LEVEL, 30, SPECIES_CAMERUPT}},
    [SPECIES_SPHEAL]                = {{EVO_LEVEL, 20, SPECIES_SEALEO}},
    [SPECIES_SEALEO]                = {{EVO_LEVEL, 40, SPECIES_WALREIN}},
    [SPECIES_CACNEA]                = {{EVO_LEVEL, 30, SPECIES_CACTURNE}},
    [SPECIES_SNORUNT]               = {{EVO_LEVEL_MALE, 30, SPECIES_GLALIE},
                                       {EVO_ITEM_FEMALE, ITEM_DAWN_STONE, SPECIES_FROSLASS}},
    [SPECIES_AZURILL]               = {{EVO_FRIENDSHIP, 0, SPECIES_MARILL}},
    [SPECIES_SPOINK]                = {{EVO_LEVEL, 30, SPECIES_GRUMPIG}},
    [SPECIES_MEDITITE]              = {{EVO_LEVEL, 30, SPECIES_MEDICHAM}},
    [SPECIES_SWABLU]                = {{EVO_LEVEL, 30, SPECIES_ALTARIA}},
    [SPECIES_WYNAUT]                = {{EVO_LEVEL, 30, SPECIES_WOBBUFFET}},
    [SPECIES_DUSKULL]               = {{EVO_LEVEL, 20, SPECIES_DUSCLOPS}},
    [SPECIES_DUSCLOPS]              = {{EVO_ITEM, ITEM_REAPER_CLOTH, SPECIES_DUSKNOIR}},
    [SPECIES_ROSELIA]               = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE}},
    [SPECIES_SLAKOTH]               = {{EVO_LEVEL, 20, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]              = {{EVO_LEVEL, 40, SPECIES_SLAKING}},
    [SPECIES_GULPIN]                = {{EVO_LEVEL, 30, SPECIES_SWALOT}},
    [SPECIES_WHISMUR]               = {{EVO_LEVEL, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]               = {{EVO_LEVEL, 40, SPECIES_EXPLOUD}},
    [SPECIES_CLAMPERL]              = {{EVO_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                                       {EVO_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}},
    [SPECIES_SHUPPET]               = {{EVO_LEVEL, 30, SPECIES_BANETTE}},
    [SPECIES_ARON]                  = {{EVO_LEVEL, 20, SPECIES_LAIRON}},
    [SPECIES_LAIRON]                = {{EVO_LEVEL, 40, SPECIES_AGGRON}},
    [SPECIES_LILEEP]                = {{EVO_LEVEL, 30, SPECIES_CRADILY}},
    [SPECIES_ANORITH]               = {{EVO_LEVEL, 30, SPECIES_ARMALDO}},
    [SPECIES_RALTS]                 = {{EVO_LEVEL, 20, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]                = {{EVO_LEVEL_FEMALE, 40, SPECIES_GARDEVOIR},
                                       {EVO_LEVEL_MALE, 40, SPECIES_GALLADE}},
    [SPECIES_BAGON]                 = {{EVO_LEVEL, 30, SPECIES_SHELGON}},
    [SPECIES_SHELGON]               = {{EVO_LEVEL, 50, SPECIES_SALAMENCE}},
    [SPECIES_BELDUM]                = {{EVO_LEVEL, 30, SPECIES_METANG}},
    [SPECIES_METANG]                = {{EVO_LEVEL, 50, SPECIES_METAGROSS}},
    [SPECIES_TURTWIG]               = {{EVO_LEVEL, 20, SPECIES_GROTLE}},
    [SPECIES_GROTLE]                = {{EVO_LEVEL, 30, SPECIES_TORTERRA}},
    [SPECIES_CHIMCHAR]              = {{EVO_LEVEL, 20, SPECIES_MONFERNO}},
    [SPECIES_MONFERNO]              = {{EVO_LEVEL, 40, SPECIES_INFERNAPE}},
    [SPECIES_PIPLUP]                = {{EVO_LEVEL, 20, SPECIES_PRINPLUP}},
    [SPECIES_PRINPLUP]              = {{EVO_LEVEL, 40, SPECIES_EMPOLEON}},
    [SPECIES_STARLY]                = {{EVO_LEVEL, 20, SPECIES_STARAVIA}},
    [SPECIES_STARAVIA]              = {{EVO_LEVEL, 40, SPECIES_STARAPTOR}},
    [SPECIES_BIDOOF]                = {{EVO_LEVEL, 30, SPECIES_BIBAREL}},
    [SPECIES_KRICKETOT]             = {{EVO_LEVEL, 20, SPECIES_KRICKETUNE}},
    [SPECIES_SHINX]                 = {{EVO_LEVEL, 20, SPECIES_LUXIO}},
    [SPECIES_LUXIO]                 = {{EVO_LEVEL, 40, SPECIES_LUXRAY}},
    [SPECIES_BUDEW]                 = {{EVO_FRIENDSHIP, 0, SPECIES_ROSELIA}},
    [SPECIES_CRANIDOS]              = {{EVO_LEVEL, 30, SPECIES_RAMPARDOS}},
    [SPECIES_SHIELDON]              = {{EVO_LEVEL, 30, SPECIES_BASTIODON}},
    [SPECIES_COMBEE]                = {{EVO_LEVEL_FEMALE, 30, SPECIES_VESPIQUEN}},
    [SPECIES_BUIZEL]                = {{EVO_LEVEL, 30, SPECIES_FLOATZEL}},
    [SPECIES_CHERUBI]               = {{EVO_LEVEL, 30, SPECIES_CHERRIM}},
    [SPECIES_SHELLOS]               = {{EVO_LEVEL, 30, SPECIES_GASTRODON}},
    [SPECIES_DRIFLOON]              = {{EVO_LEVEL, 30, SPECIES_DRIFBLIM}},
    [SPECIES_BUNEARY]               = {{EVO_FRIENDSHIP, 0, SPECIES_LOPUNNY}},
    [SPECIES_GLAMEOW]               = {{EVO_LEVEL, 30, SPECIES_PURUGLY}},
    [SPECIES_CHINGLING]             = {{EVO_FRIENDSHIP_NIGHT, 0, SPECIES_CHIMECHO}},
    [SPECIES_STUNKY]                = {{EVO_LEVEL, 30, SPECIES_SKUNTANK}},
    [SPECIES_BRONZOR]               = {{EVO_LEVEL, 30, SPECIES_BRONZONG}},
    [SPECIES_BONSLY]                = {{EVO_MOVE, MOVE_MIMIC, SPECIES_SUDOWOODO}},
    [SPECIES_MIME_JR]               = {{EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME}},
    [SPECIES_HAPPINY]               = {{EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY}},
    [SPECIES_GIBLE]                 = {{EVO_LEVEL, 30, SPECIES_GABITE}},
    [SPECIES_GABITE]                = {{EVO_LEVEL, 50, SPECIES_GARCHOMP}},
    [SPECIES_MUNCHLAX]              = {{EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}},
    [SPECIES_RIOLU]                 = {{EVO_FRIENDSHIP_DAY, 0, SPECIES_LUCARIO}},
    [SPECIES_HIPPOPOTAS]            = {{EVO_LEVEL, 30, SPECIES_HIPPOWDON}},
    [SPECIES_SKORUPI]               = {{EVO_LEVEL, 30, SPECIES_DRAPION}},
    [SPECIES_CROAGUNK]              = {{EVO_LEVEL, 30, SPECIES_TOXICROAK}},
    [SPECIES_FINNEON]               = {{EVO_LEVEL, 30, SPECIES_LUMINEON}},
    [SPECIES_MANTYKE]               = {{EVO_SPECIFIC_MON_IN_PARTY, SPECIES_REMORAID, SPECIES_MANTINE}},
    [SPECIES_SNOVER]                = {{EVO_LEVEL, 30, SPECIES_ABOMASNOW}},
    [SPECIES_SNIVY]                 = {{EVO_LEVEL, 20, SPECIES_SERVINE}},
    [SPECIES_SERVINE]               = {{EVO_LEVEL, 40, SPECIES_SERPERIOR}},
    [SPECIES_TEPIG]                 = {{EVO_LEVEL, 20, SPECIES_PIGNITE}},
    [SPECIES_PIGNITE]               = {{EVO_LEVEL, 40, SPECIES_EMBOAR}},
    [SPECIES_OSHAWOTT]              = {{EVO_LEVEL, 20, SPECIES_DEWOTT}},
    [SPECIES_DEWOTT]                = {{EVO_LEVEL, 40, SPECIES_SAMUROTT}},
    [SPECIES_LILLIPUP]              = {{EVO_LEVEL, 20, SPECIES_HERDIER}},
    [SPECIES_HERDIER]               = {{EVO_LEVEL, 40, SPECIES_STOUTLAND}},
    [SPECIES_MUNNA]                 = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_MUSHARNA}},
    [SPECIES_BLITZLE]               = {{EVO_LEVEL, 30, SPECIES_ZEBSTRIKA}},
    [SPECIES_ROGGENROLA]            = {{EVO_LEVEL, 20, SPECIES_BOLDORE}},
    [SPECIES_BOLDORE]               = {{EVO_LEVEL, 40, SPECIES_GIGALITH}},
    [SPECIES_WOOBAT]                = {{EVO_FRIENDSHIP, 0, SPECIES_SWOOBAT}},
    [SPECIES_DRILBUR]               = {{EVO_LEVEL, 30, SPECIES_EXCADRILL}},
    [SPECIES_TIMBURR]               = {{EVO_LEVEL, 20, SPECIES_GURDURR}},
    [SPECIES_GURDURR]               = {{EVO_LEVEL, 40, SPECIES_CONKELDURR}},
    [SPECIES_TYMPOLE]               = {{EVO_LEVEL, 20, SPECIES_PALPITOAD}},
    [SPECIES_PALPITOAD]             = {{EVO_LEVEL, 40, SPECIES_SEISMITOAD}},
    [SPECIES_VENIPEDE]              = {{EVO_LEVEL, 20, SPECIES_WHIRLIPEDE}},
    [SPECIES_WHIRLIPEDE]            = {{EVO_LEVEL, 40, SPECIES_SCOLIPEDE}},
    [SPECIES_COTTONEE]              = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_WHIMSICOTT}},
    [SPECIES_SANDILE]               = {{EVO_LEVEL, 20, SPECIES_KROKOROK}},
    [SPECIES_KROKOROK]              = {{EVO_LEVEL, 40, SPECIES_KROOKODILE}},
    [SPECIES_DARUMAKA]              = {{EVO_LEVEL, 30, SPECIES_DARMANITAN}},
    [SPECIES_SCRAGGY]               = {{EVO_LEVEL, 30, SPECIES_SCRAFTY}},
    [SPECIES_YAMASK]                = {{EVO_LEVEL, 30, SPECIES_COFAGRIGUS}},
    [SPECIES_TIRTOUGA]              = {{EVO_LEVEL, 30, SPECIES_CARRACOSTA}},
    [SPECIES_ARCHEN]                = {{EVO_LEVEL, 30, SPECIES_ARCHEOPS}},
    [SPECIES_ZORUA]                 = {{EVO_LEVEL, 30, SPECIES_ZOROARK}},
    [SPECIES_MINCCINO]              = {{EVO_ITEM, ITEM_SHINY_STONE, SPECIES_CINCCINO}},
    [SPECIES_GOTHITA]               = {{EVO_LEVEL, 20, SPECIES_GOTHORITA}},
    [SPECIES_GOTHORITA]             = {{EVO_LEVEL, 40, SPECIES_GOTHITELLE}},
    [SPECIES_SOLOSIS]               = {{EVO_LEVEL, 20, SPECIES_DUOSION}},
    [SPECIES_DUOSION]               = {{EVO_LEVEL, 40, SPECIES_REUNICLUS}},
    [SPECIES_VANILLITE]             = {{EVO_LEVEL, 20, SPECIES_VANILLISH}},
    [SPECIES_VANILLISH]             = {{EVO_LEVEL, 40, SPECIES_VANILLUXE}},
    [SPECIES_FOONGUS]               = {{EVO_LEVEL, 30, SPECIES_AMOONGUSS}},
    [SPECIES_FRILLISH]              = {{EVO_LEVEL, 30, SPECIES_JELLICENT}},
    [SPECIES_JOLTIK]                = {{EVO_LEVEL, 30, SPECIES_GALVANTULA}},
    [SPECIES_FERROSEED]             = {{EVO_LEVEL, 30, SPECIES_FERROTHORN}},
    [SPECIES_KLINK]                 = {{EVO_LEVEL, 20, SPECIES_KLANG}},
    [SPECIES_KLANG]                 = {{EVO_LEVEL, 40, SPECIES_KLINKLANG}},
    [SPECIES_TYNAMO]                = {{EVO_LEVEL, 20, SPECIES_EELEKTRIK}},
    [SPECIES_EELEKTRIK]             = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_EELEKTROSS}},
    [SPECIES_ELGYEM]                = {{EVO_LEVEL, 30, SPECIES_BEHEEYEM}},
    [SPECIES_LITWICK]               = {{EVO_LEVEL, 20, SPECIES_LAMPENT}},
    [SPECIES_LAMPENT]               = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_CHANDELURE}},
    [SPECIES_AXEW]                  = {{EVO_LEVEL, 30, SPECIES_FRAXURE}},
    [SPECIES_FRAXURE]               = {{EVO_LEVEL, 50, SPECIES_HAXORUS}},
    [SPECIES_CUBCHOO]               = {{EVO_LEVEL, 30, SPECIES_BEARTIC}},
    [SPECIES_GOLETT]                = {{EVO_LEVEL, 30, SPECIES_GOLURK}},
    [SPECIES_PAWNIARD]              = {{EVO_LEVEL, 30, SPECIES_BISHARP}},
    [SPECIES_VULLABY]               = {{EVO_LEVEL, 30, SPECIES_MANDIBUZZ}},
    [SPECIES_DEINO]                 = {{EVO_LEVEL, 30, SPECIES_ZWEILOUS}},
    [SPECIES_ZWEILOUS]              = {{EVO_LEVEL, 50, SPECIES_HYDREIGON}},
    [SPECIES_LARVESTA]              = {{EVO_LEVEL, 50, SPECIES_VOLCARONA}},
    [SPECIES_CHESPIN]               = {{EVO_LEVEL, 20, SPECIES_QUILLADIN}},
    [SPECIES_QUILLADIN]             = {{EVO_LEVEL, 40, SPECIES_CHESNAUGHT}},
    [SPECIES_FENNEKIN]              = {{EVO_LEVEL, 20, SPECIES_BRAIXEN}},
    [SPECIES_BRAIXEN]               = {{EVO_LEVEL, 40, SPECIES_DELPHOX}},
    [SPECIES_FROAKIE]               = {{EVO_LEVEL, 20, SPECIES_FROGADIER}},
    [SPECIES_FROGADIER]             = {{EVO_LEVEL, 40, SPECIES_GRENINJA}},
    [SPECIES_BUNNELBY]              = {{EVO_LEVEL, 30, SPECIES_DIGGERSBY}},
    [SPECIES_FLETCHLING]            = {{EVO_LEVEL, 20, SPECIES_FLETCHINDER}},
    [SPECIES_FLETCHINDER]           = {{EVO_LEVEL, 40, SPECIES_TALONFLAME}},
    [SPECIES_LITLEO]                = {{EVO_LEVEL, 30, SPECIES_PYROAR}},
    [SPECIES_SKIDDO]                = {{EVO_LEVEL, 30, SPECIES_GOGOAT}},
    [SPECIES_PANCHAM]               = {{EVO_LEVEL_DARK_TYPE_MON_IN_PARTY, 30, SPECIES_PANGORO}},
    [SPECIES_HONEDGE]               = {{EVO_LEVEL, 30, SPECIES_DOUBLADE}},
    [SPECIES_DOUBLADE]              = {{EVO_ITEM, ITEM_DUSK_STONE, SPECIES_AEGISLASH}},
    [SPECIES_INKAY]                 = {{EVO_LEVEL, 30, SPECIES_MALAMAR}},
    [SPECIES_HELIOPTILE]            = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_HELIOLISK}},
    [SPECIES_TYRUNT]                = {{EVO_LEVEL_DAY, 30, SPECIES_TYRANTRUM}},
    [SPECIES_AMAURA]                = {{EVO_LEVEL_NIGHT, 30, SPECIES_AURORUS}},
    [SPECIES_GOOMY]                 = {{EVO_LEVEL, 30, SPECIES_SLIGGOO}},
    [SPECIES_SLIGGOO]               = {{EVO_LEVEL_RAIN, 50, SPECIES_GOODRA}},
    [SPECIES_PHANTUMP]              = {{EVO_LEVEL_NIGHT, 30, SPECIES_TREVENANT}},
    [SPECIES_BERGMITE]              = {{EVO_LEVEL, 30, SPECIES_AVALUGG}},
    [SPECIES_NOIBAT]                = {{EVO_LEVEL, 30, SPECIES_NOIVERN}},
    [SPECIES_ROWLET]                = {{EVO_LEVEL, 20, SPECIES_DARTRIX}},
    [SPECIES_DARTRIX]               = {{EVO_LEVEL, 40, SPECIES_DECIDUEYE}},
    [SPECIES_LITTEN]                = {{EVO_LEVEL, 20, SPECIES_TORRACAT}},
    [SPECIES_TORRACAT]              = {{EVO_LEVEL, 40, SPECIES_INCINEROAR}},
    [SPECIES_POPPLIO]               = {{EVO_LEVEL, 20, SPECIES_BRIONNE}},
    [SPECIES_BRIONNE]               = {{EVO_LEVEL, 40, SPECIES_PRIMARINA}},
    [SPECIES_PIKIPEK]               = {{EVO_LEVEL, 20, SPECIES_TRUMBEAK}},
    [SPECIES_TRUMBEAK]              = {{EVO_LEVEL, 40, SPECIES_TOUCANNON}},
    [SPECIES_ROCKRUFF]              = {{EVO_LEVEL_DAY, 30, SPECIES_LYCANROC},
                                       {EVO_LEVEL_DUSK, 30, SPECIES_LYCANROC_DUSK},
                                       {EVO_LEVEL_NIGHT, 30, SPECIES_LYCANROC_MIDNIGHT}},
    [SPECIES_MAREANIE]              = {{EVO_LEVEL, 30, SPECIES_TOXAPEX}},
    [SPECIES_MUDBRAY]               = {{EVO_LEVEL, 30, SPECIES_MUDSDALE}},
    [SPECIES_DEWPIDER]              = {{EVO_LEVEL, 30, SPECIES_ARAQUANID}},
    [SPECIES_SALANDIT]              = {{EVO_LEVEL_FEMALE, 30, SPECIES_SALAZZLE}},
    [SPECIES_STUFFUL]               = {{EVO_LEVEL, 30, SPECIES_BEWEAR}},
    [SPECIES_BOUNSWEET]             = {{EVO_LEVEL, 20, SPECIES_STEENEE}},
    [SPECIES_STEENEE]               = {{EVO_MOVE, MOVE_STOMP, SPECIES_TSAREENA}},
    [SPECIES_SANDYGAST]             = {{EVO_LEVEL, 30, SPECIES_PALOSSAND}},
    [SPECIES_JANGMO_O]              = {{EVO_LEVEL, 30, SPECIES_HAKAMO_O}},
    [SPECIES_HAKAMO_O]              = {{EVO_LEVEL, 50, SPECIES_KOMMO_O}},
    [SPECIES_COSMOG]                = {{EVO_LEVEL, 20, SPECIES_COSMOEM}},
    [SPECIES_COSMOEM]               = {{EVO_LEVEL_DAY, 40, SPECIES_SOLROCK},
                                       {EVO_LEVEL_NIGHT, 40, SPECIES_LUNATONE}},
    [SPECIES_POIPOLE]               = {{EVO_MOVE, MOVE_DRAGON_PULSE, SPECIES_NAGANADEL}},
    [SPECIES_GROOKEY]               = {{EVO_LEVEL, 20, SPECIES_THWACKEY}},
    [SPECIES_THWACKEY]              = {{EVO_LEVEL, 40, SPECIES_RILLABOOM}},
    [SPECIES_SCORBUNNY]             = {{EVO_LEVEL, 20, SPECIES_RABOOT}},
    [SPECIES_RABOOT]                = {{EVO_LEVEL, 40, SPECIES_CINDERACE}},
    [SPECIES_SOBBLE]                = {{EVO_LEVEL, 20, SPECIES_DRIZZILE}},
    [SPECIES_DRIZZILE]              = {{EVO_LEVEL, 40, SPECIES_INTELEON}},
    [SPECIES_ROOKIDEE]              = {{EVO_LEVEL, 20, SPECIES_CORVISQUIRE}},
    [SPECIES_CORVISQUIRE]           = {{EVO_LEVEL, 40, SPECIES_CORVIKNIGHT}},
    [SPECIES_BLIPBUG]               = {{EVO_LEVEL, 15, SPECIES_DOTTLER}},
    [SPECIES_DOTTLER]               = {{EVO_LEVEL, 30, SPECIES_ORBEETLE}},
    [SPECIES_WOOLOO]                = {{EVO_LEVEL, 30, SPECIES_DUBWOOL}},
    [SPECIES_ROLYCOLY]              = {{EVO_LEVEL, 20, SPECIES_CARKOL}},
    [SPECIES_CARKOL]                = {{EVO_LEVEL, 40, SPECIES_COALOSSAL}},
    [SPECIES_SILICOBRA]             = {{EVO_LEVEL, 30, SPECIES_SANDACONDA}},
    [SPECIES_TOXEL]                 = {{EVO_LEVEL_NATURE_AMPED, 30, SPECIES_TOXTRICITY},
                                       {EVO_LEVEL_NATURE_LOW_KEY, 30, SPECIES_TOXTRICITY_LOW_KEY}},
    [SPECIES_HATENNA]               = {{EVO_LEVEL, 20, SPECIES_HATTREM}},
    [SPECIES_HATTREM]               = {{EVO_LEVEL, 40, SPECIES_HATTERENE}},
    [SPECIES_IMPIDIMP]              = {{EVO_LEVEL, 20, SPECIES_MORGREM}},
    [SPECIES_MORGREM]               = {{EVO_LEVEL, 40, SPECIES_GRIMMSNARL}},
    [SPECIES_SNOM]                  = {{EVO_FRIENDSHIP_NIGHT, 0, SPECIES_FROSMOTH}},
    [SPECIES_CUFANT]                = {{EVO_LEVEL, 30, SPECIES_COPPERAJAH}},
    [SPECIES_DREEPY]                = {{EVO_LEVEL, 30, SPECIES_DRAKLOAK}},
    [SPECIES_DRAKLOAK]              = {{EVO_LEVEL, 50, SPECIES_DRAGAPULT}},
    [SPECIES_SANDSHREW_ALOLAN]      = {{EVO_ITEM, ITEM_ICE_STONE, SPECIES_SANDSLASH_ALOLAN}},
    [SPECIES_VULPIX_ALOLAN]         = {{EVO_ITEM, ITEM_ICE_STONE, SPECIES_NINETALES_ALOLAN}},
    [SPECIES_LINOONE_GALARIAN]      = {{EVO_LEVEL_NIGHT, 40, SPECIES_OBSTAGOON}},
    [SPECIES_DARUMAKA_GALARIAN]     = {{EVO_ITEM, ITEM_ICE_STONE, SPECIES_DARMANITAN_GALARIAN}},
    [SPECIES_ZIGZAGOON_GALARIAN]    = {{EVO_LEVEL, 20, SPECIES_LINOONE_GALARIAN}},
    [SPECIES_SHELLOS_EAST_SEA]      = {{EVO_LEVEL, 30, SPECIES_GASTRODON_EAST_SEA}},
};
