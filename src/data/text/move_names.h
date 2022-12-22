const u8 gMoveNames[MOVES_COUNT][MOVE_NAME_LENGTH + 1] =
{
    [MOVE_NONE] = _("-"),
    [MOVE_POUND] = _("Destructor"),
    [MOVE_KARATE_CHOP] = _("Golpe kárate"),
    [MOVE_DOUBLE_SLAP] = _("Doble bofetón"),
    [MOVE_COMET_PUNCH] = _("Puño cometa"),
    [MOVE_MEGA_PUNCH] = _("Megapuño"),
    [MOVE_PAY_DAY] = _("Ajustacuentas"),
    [MOVE_FIRE_PUNCH] = _("Puño fuego"),
    [MOVE_ICE_PUNCH] = _("Puño hielo"),
    [MOVE_THUNDER_PUNCH] = _("Puño trueno"),
    [MOVE_SCRATCH] = _("Arañazo"),
    [MOVE_VISE_GRIP] = _("Agarrón"),
    [MOVE_GUILLOTINE] = _("Guillotina"),
    [MOVE_RAZOR_WIND] = _("Viento afilado"),
    [MOVE_SWORDS_DANCE] = _("Danza espada"),
    [MOVE_CUT] = _("Corte"),
    [MOVE_GUST] = _("Tornado"),
    [MOVE_WING_ATTACK] = _("Ataque ala"),
    [MOVE_WHIRLWIND] = _("Remolino"),
    [MOVE_FLY] = _("Vuelo"),
    [MOVE_BIND] = _("Atadura"),
    [MOVE_SLAM] = _("Atizar"),
    [MOVE_VINE_WHIP] = _("Látigo cepa"),
    [MOVE_STOMP] = _("Pisotón"),
    [MOVE_DOUBLE_KICK] = _("Doble patada"),
    [MOVE_MEGA_KICK] = _("Megapatada"),
    [MOVE_JUMP_KICK] = _("Patada salto"),
    [MOVE_ROLLING_KICK] = _("Patada giratoria"),
    [MOVE_SAND_ATTACK] = _("Ataque arena"),
    [MOVE_HEADBUTT] = _("Cabezazo"),
    [MOVE_HORN_ATTACK] = _("Ataque cuerno"),
    [MOVE_FURY_ATTACK] = _("Ataque furia"),
    [MOVE_HORN_DRILL] = _("Perforadora"),
    [MOVE_TACKLE] = _("Placaje"),
    [MOVE_BODY_SLAM] = _("Golpe cuerpo"),
    [MOVE_WRAP] = _("Constricción"),
    [MOVE_TAKE_DOWN] = _("Derribo"),
    [MOVE_THRASH] = _("Golpe"),
    [MOVE_DOUBLE_EDGE] = _("Doble filo"),
    [MOVE_TAIL_WHIP] = _("Látigo"),
    [MOVE_POISON_STING] = _("Picotazo ven."),
    [MOVE_TWINEEDLE] = _("Doble aguijón"),
    [MOVE_PIN_MISSILE] = _("Misil aguijón"),
    [MOVE_LEER] = _("Malicioso"),
    [MOVE_BITE] = _("Mordisco"),
    [MOVE_GROWL] = _("Gruñido"),
    [MOVE_ROAR] = _("Rugido"),
    [MOVE_SING] = _("Canto"),
    [MOVE_SUPERSONIC] = _("Supersónico"),
    [MOVE_SONIC_BOOM] = _("Bomba sónica"),
    [MOVE_DISABLE] = _("Desactivación"),
    [MOVE_ACID] = _("Ácido"),
    [MOVE_EMBER] = _("Ascuas"),
    [MOVE_FLAMETHROWER] = _("Lanzallamas"),
    [MOVE_MIST] = _("Neblina"),
    [MOVE_WATER_GUN] = _("Pistola agua"),
    [MOVE_HYDRO_PUMP] = _("Hidrobomba"),
    [MOVE_SURF] = _("Surf"),
    [MOVE_ICE_BEAM] = _("Rayo hielo"),
    [MOVE_BLIZZARD] = _("Ventisca"),
    [MOVE_PSYBEAM] = _("Psicorayo"),
    [MOVE_BUBBLE_BEAM] = _("Rayo burbuja"),
    [MOVE_AURORA_BEAM] = _("Rayo aurora"),
    [MOVE_HYPER_BEAM] = _("Hiperrayo"),
    [MOVE_PECK] = _("Picotazo"),
    [MOVE_DRILL_PECK] = _("Pico taladro"),
    [MOVE_SUBMISSION] = _("Sumisión"),
    [MOVE_LOW_KICK] = _("Patada baja"),
    [MOVE_COUNTER] = _("Contragolpe"),
    [MOVE_SEISMIC_TOSS] = _("Mov. sísmico"),
    [MOVE_STRENGTH] = _("Fuerza"),
    [MOVE_ABSORB] = _("Absorber"),
    [MOVE_MEGA_DRAIN] = _("Megadrenaje"),
    [MOVE_LEECH_SEED] = _("Drenadoras"),
    [MOVE_GROWTH] = _("Desarrollo"),
    [MOVE_RAZOR_LEAF] = _("Hoja afilada"),
    [MOVE_SOLAR_BEAM] = _("Rayo solar"),
    [MOVE_POISON_POWDER] = _("Polvo venenoso"),
    [MOVE_STUN_SPORE] = _("Paralizador"),
    [MOVE_SLEEP_POWDER] = _("Somnífero"),
    [MOVE_PETAL_DANCE] = _("Danza pétalo"),
    [MOVE_STRING_SHOT] = _("Disparo de seda"),
    [MOVE_DRAGON_RAGE] = _("Furia dragón"),
    [MOVE_FIRE_SPIN] = _("Giro fuego"),
    [MOVE_THUNDER_SHOCK] = _("Impactrueno"),
    [MOVE_THUNDERBOLT] = _("Rayo"),
    [MOVE_THUNDER_WAVE] = _("Onda trueno"),
    [MOVE_THUNDER] = _("Trueno"),
    [MOVE_ROCK_THROW] = _("Lanzarrocas"),
    [MOVE_EARTHQUAKE] = _("Terremoto"),
    [MOVE_FISSURE] = _("Fisura"),
    [MOVE_DIG] = _("Excavar"),
    [MOVE_TOXIC] = _("Tóxico"),
    [MOVE_CONFUSION] = _("Confusión"),
    [MOVE_PSYCHIC] = _("Psíquico"),
    [MOVE_HYPNOSIS] = _("Hipnósis"),
    [MOVE_MEDITATE] = _("Meditación"),
    [MOVE_AGILITY] = _("Agilidad"),
    [MOVE_QUICK_ATTACK] = _("Ataque rápido"),
    [MOVE_RAGE] = _("Furia"),
    [MOVE_TELEPORT] = _("Teletransporte"),
    [MOVE_NIGHT_SHADE] = _("Tinieblas"),
    [MOVE_MIMIC] = _("Mímica"),
    [MOVE_SCREECH] = _("Chirrido"),
    [MOVE_DOUBLE_TEAM] = _("Doble equipo"),
    [MOVE_RECOVER] = _("Recuperación"),
    [MOVE_HARDEN] = _("Fortaleza"),
    [MOVE_MINIMIZE] = _("Reducción"),
    [MOVE_SMOKESCREEN] = _("Pantalla humo"),
    [MOVE_CONFUSE_RAY] = _("Rayo confuso"),
    [MOVE_WITHDRAW] = _("Refugio"),
    [MOVE_DEFENSE_CURL] = _("Rizo defensa"),
    [MOVE_BARRIER] = _("Barrera"),
    [MOVE_LIGHT_SCREEN] = _("Pantalla de luz"),
    [MOVE_HAZE] = _("Niebla"),
    [MOVE_REFLECT] = _("Reflejo"),
    [MOVE_FOCUS_ENERGY] = _("Foco energía"),
    [MOVE_BIDE] = _("Venganza"),
    [MOVE_METRONOME] = _("Metrónomo"),
    [MOVE_MIRROR_MOVE] = _("Ataque espejo"),
    [MOVE_SELF_DESTRUCT] = _("Autodestrucción"),
    [MOVE_EGG_BOMB] = _("Bomba huevo"),
    [MOVE_LICK] = _("Lengüetazo"),
    [MOVE_SMOG] = _("Polución"),
    [MOVE_SLUDGE] = _("Residuos"),
    [MOVE_BONE_CLUB] = _("Golpe hueso"),
    [MOVE_FIRE_BLAST] = _("Llamarada"),
    [MOVE_WATERFALL] = _("Cascada"),
    [MOVE_CLAMP] = _("Tenaza"),
    [MOVE_SWIFT] = _("Rapidez"),
    [MOVE_SKULL_BASH] = _("Golpe cráneo"),
    [MOVE_SPIKE_CANNON] = _("Cañón de púas"),
    [MOVE_CONSTRICT] = _("Restricción"),
    [MOVE_AMNESIA] = _("Amnesia"),
    [MOVE_KINESIS] = _("Kinesis"),
    [MOVE_SOFT_BOILED] = _("Amortiguador"),
    [MOVE_HIGH_JUMP_KICK] = _("Patada sal. alta"),
    [MOVE_GLARE] = _("Deslumbrar"),
    [MOVE_DREAM_EATER] = _("Comesueños"),
    [MOVE_POISON_GAS] = _("Gas venenoso"),
    [MOVE_BARRAGE] = _("Presa"),
    [MOVE_LEECH_LIFE] = _("Chupavidas"),
    [MOVE_LOVELY_KISS] = _("Beso amoroso"),
    [MOVE_SKY_ATTACK] = _("Ataque aéreo"),
    [MOVE_TRANSFORM] = _("Transformación"),
    [MOVE_BUBBLE] = _("Burbuja"),
    [MOVE_DIZZY_PUNCH] = _("Puño mareo"),
    [MOVE_SPORE] = _("Espora"),
    [MOVE_FLASH] = _("Destello"),
    [MOVE_PSYWAVE] = _("Psicoonda"),
    [MOVE_SPLASH] = _("Salpicar"),
    [MOVE_ACID_ARMOR] = _("Armadura ácida"),
    [MOVE_CRABHAMMER] = _("Golpe cangrejo"),
    [MOVE_EXPLOSION] = _("Explosión"),
    [MOVE_FURY_SWIPES] = _("Golpes furia"),
    [MOVE_BONEMERANG] = _("Hueso boomerang"),
    [MOVE_REST] = _("Descanso"),
    [MOVE_ROCK_SLIDE] = _("Avalancha"),
    [MOVE_HYPER_FANG] = _("Hipercolmillo"),
    [MOVE_SHARPEN] = _("Afilar"),
    [MOVE_CONVERSION] = _("Conversión"),
    [MOVE_TRI_ATTACK] = _("Triataque"),
    [MOVE_SUPER_FANG] = _("Supercolmillo"),
    [MOVE_SLASH] = _("Cuchillada"),
    [MOVE_SUBSTITUTE] = _("Sustituto"),
    [MOVE_STRUGGLE] = _("Supervivencia"),
    [MOVE_SKETCH] = _("Esquema"),
    [MOVE_TRIPLE_KICK] = _("Triple patada"),
    [MOVE_THIEF] = _("Ladrón"),
    [MOVE_SPIDER_WEB] = _("Tela de araña"),
    [MOVE_MIND_READER] = _("Lectura de mente"),
    [MOVE_NIGHTMARE] = _("Pesadilla"),
    [MOVE_FLAME_WHEEL] = _("Rueda fuego"),
    [MOVE_SNORE] = _("Ronquido"),
    [MOVE_CURSE] = _("Maldición"),
    [MOVE_FLAIL] = _("Azote"),
    [MOVE_CONVERSION_2] = _("Conversión 2"),
    [MOVE_AEROBLAST] = _("Aerocañón"),
    [MOVE_COTTON_SPORE] = _("Espora algodón"),
    [MOVE_REVERSAL] = _("Inversión"),
    [MOVE_SPITE] = _("Rencor"),
    [MOVE_POWDER_SNOW] = _("Nieve polvo"),
    [MOVE_PROTECT] = _("Protección"),
    [MOVE_MACH_PUNCH] = _("Puño rápido"),
    [MOVE_SCARY_FACE] = _("Cara susto"),
    [MOVE_FEINT_ATTACK] = _("Ataque finta"),
    [MOVE_SWEET_KISS] = _("Beso dulce"),
    [MOVE_BELLY_DRUM] = _("Tambor"),
    [MOVE_SLUDGE_BOMB] = _("Bomba lodo"),
    [MOVE_MUD_SLAP] = _("Bofetón lodo"),
    [MOVE_OCTAZOOKA] = _("Pulpo cañón"),
    [MOVE_SPIKES] = _("Púas"),
    [MOVE_ZAP_CANNON] = _("Cañon eléctrico"),
    [MOVE_FORESIGHT] = _("Profecía"),
    [MOVE_DESTINY_BOND] = _("Lazo destino"),
    [MOVE_PERISH_SONG] = _("Canto mortal"),
    [MOVE_ICY_WIND] = _("Viento helado"),
    [MOVE_DETECT] = _("Detección"),
    [MOVE_BONE_RUSH] = _("Hueso veloz"),
    [MOVE_LOCK_ON] = _("Apuntar"),
    [MOVE_OUTRAGE] = _("Enfado"),
    [MOVE_SANDSTORM] = _("Tormenta arena"),
    [MOVE_GIGA_DRAIN] = _("Gigadrenado"),
    [MOVE_ENDURE] = _("Aguante"),
    [MOVE_CHARM] = _("Encanto"),
    [MOVE_ROLLOUT] = _("Desenrollar"),
    [MOVE_FALSE_SWIPE] = _("Golpe falso"),
    [MOVE_SWAGGER] = _("Vacile"),
    [MOVE_MILK_DRINK] = _("Batido"),
    [MOVE_SPARK] = _("Chispa"),
    [MOVE_FURY_CUTTER] = _("Corte furia"),
    [MOVE_STEEL_WING] = _("Ala de acero"),
    [MOVE_MEAN_LOOK] = _("Mal de ojo"),
    [MOVE_ATTRACT] = _("Atracción"),
    [MOVE_SLEEP_TALK] = _("Sonámbulo"),
    [MOVE_HEAL_BELL] = _("Campana cura"),
    [MOVE_RETURN] = _("Retroceso"),
    [MOVE_PRESENT] = _("Presente"),
    [MOVE_FRUSTRATION] = _("Frustración"),
    [MOVE_SAFEGUARD] = _("Velo guarda"),
    [MOVE_PAIN_SPLIT] = _("Divide dolor"),
    [MOVE_SACRED_FIRE] = _("Fuego sagrado"),
    [MOVE_MAGNITUDE] = _("Magnitud"),
    [MOVE_DYNAMIC_PUNCH] = _("Puño dinámico"),
    [MOVE_MEGAHORN] = _("Megacuerno"),
    [MOVE_DRAGON_BREATH] = _("Dragoaliento"),
    [MOVE_BATON_PASS] = _("Relevo"),
    [MOVE_ENCORE] = _("Otra vez"),
    [MOVE_PURSUIT] = _("Persecución"),
    [MOVE_RAPID_SPIN] = _("Giro rápido"),
    [MOVE_SWEET_SCENT] = _("Dulce aroma"),
    [MOVE_IRON_TAIL] = _("Cola hierro"),
    [MOVE_METAL_CLAW] = _("Garra metal"),
    [MOVE_VITAL_THROW] = _("Tiro vital"),
    [MOVE_MORNING_SUN] = _("Sol matinal"),
    [MOVE_SYNTHESIS] = _("Síntesis"),
    [MOVE_MOONLIGHT] = _("Luz lunar"),
    [MOVE_HIDDEN_POWER] = _("Poder oculto"),
    [MOVE_CROSS_CHOP] = _("Tajo cruzado"),
    [MOVE_TWISTER] = _("Ciclón"),
    [MOVE_RAIN_DANCE] = _("Danza lluvia"),
    [MOVE_SUNNY_DAY] = _("Día soleado"),
    [MOVE_CRUNCH] = _("Triturar"),
    [MOVE_MIRROR_COAT] = _("Manto espejo"),
    [MOVE_PSYCH_UP] = _("Más psique"),
    [MOVE_EXTREME_SPEED] = _("Velocidad ext."),
    [MOVE_ANCIENT_POWER] = _("Poder pasado"),
    [MOVE_SHADOW_BALL] = _("Bola sombra"),
    [MOVE_FUTURE_SIGHT] = _("Premonición"),
    [MOVE_ROCK_SMASH] = _("Golpe roca"),
    [MOVE_WHIRLPOOL] = _("Remolino"),
    [MOVE_BEAT_UP] = _("Paliza"),
    [MOVE_FAKE_OUT] = _("Sorpresa"),
    [MOVE_UPROAR] = _("Alboroto"),
    [MOVE_STOCKPILE] = _("Regurgitar"),
    [MOVE_SPIT_UP] = _("Tragar"),
    [MOVE_SWALLOW] = _("Escupir"),
    [MOVE_HEAT_WAVE] = _("Ola de calor"),
    [MOVE_HAIL] = _("Granizo"),
    [MOVE_TORMENT] = _("Tormento"),
    [MOVE_FLATTER] = _("Camelo"),
    [MOVE_WILL_O_WISP] = _("Fuego fatuo"),
    [MOVE_MEMENTO] = _("Legado"),
    [MOVE_FACADE] = _("Imagen"),
    [MOVE_FOCUS_PUNCH] = _("Puño certero"),
    [MOVE_SMELLING_SALTS] = _("Sopapo"),
    [MOVE_FOLLOW_ME] = _("Señuelo"),
    [MOVE_NATURE_POWER] = _("Poder natural"),
    [MOVE_CHARGE] = _("Carga"),
    [MOVE_TAUNT] = _("Mofa"),
    [MOVE_HELPING_HAND] = _("Mano amiga"),
    [MOVE_TRICK] = _("Truco"),
    [MOVE_ROLE_PLAY] = _("Cambiarrol"),
    [MOVE_WISH] = _("Deseo"),
    [MOVE_ASSIST] = _("Asistencia"),
    [MOVE_INGRAIN] = _("Arraigo"),
    [MOVE_SUPERPOWER] = _("Superpoder"),
    [MOVE_MAGIC_COAT] = _("Manto mágico"),
    [MOVE_RECYCLE] = _("Reciclaje"),
    [MOVE_REVENGE] = _("Desquite"),
    [MOVE_BRICK_BREAK] = _("Demolición"),
    [MOVE_YAWN] = _("Bostezo"),
    [MOVE_KNOCK_OFF] = _("Desarme"),
    [MOVE_ENDEAVOR] = _("Esfuerzo"),
    [MOVE_ERUPTION] = _("Erupción"),
    [MOVE_SKILL_SWAP] = _("Cambiahabilidad"),
    [MOVE_IMPRISON] = _("Sellar"),
    [MOVE_REFRESH] = _("Refresco"),
    [MOVE_GRUDGE] = _("Rabia"),
    [MOVE_SNATCH] = _("Robo"),
    [MOVE_SECRET_POWER] = _("Poder secreto"),
    [MOVE_DIVE] = _("Buceo"),
    [MOVE_ARM_THRUST] = _("Empujón"),
    [MOVE_CAMOUFLAGE] = _("Camuflaje"),
    [MOVE_TAIL_GLOW] = _("Cola faro"),
    [MOVE_LUSTER_PURGE] = _("Resplandor"),
    [MOVE_MIST_BALL] = _("Bola niebla"),
    [MOVE_FEATHER_DANCE] = _("Danza pluma"),
    [MOVE_TEETER_DANCE] = _("Danza caos"),
    [MOVE_BLAZE_KICK] = _("Patada ígnea"),
    [MOVE_MUD_SPORT] = _("Chapoteolodo"),
    [MOVE_ICE_BALL] = _("Bola de nieve"),
    [MOVE_NEEDLE_ARM] = _("Brazo pincho"),
    [MOVE_SLACK_OFF] = _("Relajo"),
    [MOVE_HYPER_VOICE] = _("Vozarrón"),
    [MOVE_POISON_FANG] = _("Colmillo ven."),
    [MOVE_CRUSH_CLAW] = _("Garra brutal"),
    [MOVE_BLAST_BURN] = _("Anillo ígneo"),
    [MOVE_HYDRO_CANNON] = _("Hidrocañón"),
    [MOVE_METEOR_MASH] = _("Puño meteoro"),
    [MOVE_ASTONISH] = _("Impresionar"),
    [MOVE_WEATHER_BALL] = _("Meteorobola"),
    [MOVE_AROMATHERAPY] = _("Aromaterapia"),
    [MOVE_FAKE_TEARS] = _("Llanto falso"),
    [MOVE_AIR_CUTTER] = _("Corte aéreo"),
    [MOVE_OVERHEAT] = _("Sofoco"),
    [MOVE_ODOR_SLEUTH] = _("Rastreo"),
    [MOVE_ROCK_TOMB] = _("Tumba rocas"),
    [MOVE_SILVER_WIND] = _("Viento plata"),
    [MOVE_METAL_SOUND] = _("Eco metálico"),
    [MOVE_GRASS_WHISTLE] = _("Silbato"),
    [MOVE_TICKLE] = _("Cosquillas"),
    [MOVE_COSMIC_POWER] = _("Masa cósmico"),
    [MOVE_WATER_SPOUT] = _("Salpicar"),
    [MOVE_SIGNAL_BEAM] = _("Rayo señal"),
    [MOVE_SHADOW_PUNCH] = _("Puño sombra"),
    [MOVE_EXTRASENSORY] = _("Paranormal"),
    [MOVE_SKY_UPPERCUT] = _("Gancho alto"),
    [MOVE_SAND_TOMB] = _("Tumba arena"),
    [MOVE_SHEER_COLD] = _("Frío polar"),
    [MOVE_MUDDY_WATER] = _("Agua lodosa"),
    [MOVE_BULLET_SEED] = _("Semilla bala"),
    [MOVE_AERIAL_ACE] = _("Golpe aéreo"),
    [MOVE_ICICLE_SPEAR] = _("Carámbano"),
    [MOVE_IRON_DEFENSE] = _("Defensa hierro"),
    [MOVE_BLOCK] = _("Bloqueo"),
    [MOVE_HOWL] = _("Aullido"),
    [MOVE_DRAGON_CLAW] = _("Garra dragón"),
    [MOVE_FRENZY_PLANT] = _("Planta feroz"),
    [MOVE_BULK_UP] = _("Corpulencia"),
    [MOVE_BOUNCE] = _("Bote"),
    [MOVE_MUD_SHOT] = _("Disparo lodo"),
    [MOVE_POISON_TAIL] = _("Cola venenosa"),
    [MOVE_COVET] = _("Antojo"),
    [MOVE_VOLT_TACKLE] = _("Voltio placaje"),
    [MOVE_MAGICAL_LEAF] = _("Hoja mágica"),
    [MOVE_WATER_SPORT] = _("Remojo"),
    [MOVE_CALM_MIND] = _("Paz mental"),
    [MOVE_LEAF_BLADE] = _("Hoja aguda"),
    [MOVE_DRAGON_DANCE] = _("Danza dragón"),
    [MOVE_ROCK_BLAST] = _("Pedrada"),
    [MOVE_SHOCK_WAVE] = _("Onda voltio"),
    [MOVE_WATER_PULSE] = _("Hidropulso"),
    [MOVE_DOOM_DESIRE] = _("Deseo condena"),
    [MOVE_PSYCHO_BOOST] = _("Psicoimpulso"),
    [MOVE_ROOST] = _("Respiro"),
    [MOVE_GRAVITY] = _("Gravedad"),
    [MOVE_MIRACLE_EYE] = _("Ojo milagroso"),
    [MOVE_WAKE_UP_SLAP] = _("Espabila"),
    [MOVE_HAMMER_ARM] = _("Brazo martillo"),
    [MOVE_GYRO_BALL] = _("Girobola"),
    [MOVE_HEALING_WISH] = _("Deseo cura"),
    [MOVE_BRINE] = _("Salmuera"),
    [MOVE_NATURAL_GIFT] = _("Don natural"),
    [MOVE_FEINT] = _("Finta"),
    [MOVE_PLUCK] = _("Picotazo"),
    [MOVE_TAILWIND] = _("Viento afín"),
    [MOVE_ACUPRESSURE] = _("Acupresión"),
    [MOVE_METAL_BURST] = _("Represión metal"),
    [MOVE_U_TURN] = _("Ida y vuelta"),
    [MOVE_CLOSE_COMBAT] = _("A bocajarro"),
    [MOVE_PAYBACK] = _("Revancha"),
    [MOVE_ASSURANCE] = _("Buena baza"),
    [MOVE_EMBARGO] = _("Embargo"),
    [MOVE_FLING] = _("Lanzamiento"),
    [MOVE_PSYCHO_SHIFT] = _("Psicocambio"),
    [MOVE_TRUMP_CARD] = _("As escondido"),
    [MOVE_HEAL_BLOCK] = _("Bloqueo cura"),
    [MOVE_WRING_OUT] = _("Estrujón"),
    [MOVE_POWER_TRICK] = _("Truco fuerza"),
    [MOVE_GASTRO_ACID] = _("Gastroácido"),
    [MOVE_LUCKY_CHANT] = _("Conjuro"),
    [MOVE_ME_FIRST] = _("Yo primero"),
    [MOVE_COPYCAT] = _("Copión"),
    [MOVE_POWER_SWAP] = _("Cambiafuerza"),
    [MOVE_GUARD_SWAP] = _("Cambiaguardia"),
    [MOVE_PUNISHMENT] = _("Castigo"),
    [MOVE_LAST_RESORT] = _("Última baza"),
    [MOVE_WORRY_SEED] = _("Abatidoras"),
    [MOVE_SUCKER_PUNCH] = _("Golpe bajo"),
    [MOVE_TOXIC_SPIKES] = _("Púas tóxicas"),
    [MOVE_HEART_SWAP] = _("Cambiaalmas"),
    [MOVE_AQUA_RING] = _("Anillo de agua"),
    [MOVE_MAGNET_RISE] = _("Magnolevitación"),
    [MOVE_FLARE_BLITZ] = _("Envite ígneo"),
    [MOVE_FORCE_PALM] = _("Palmetazo"),
    [MOVE_AURA_SPHERE] = _("Esfera aural"),
    [MOVE_ROCK_POLISH] = _("Pulimento"),
    [MOVE_POISON_JAB] = _("Puya nociva"),
    [MOVE_DARK_PULSE] = _("Pulso umbrío"),
    [MOVE_NIGHT_SLASH] = _("Tajo umbrío"),
    [MOVE_AQUA_TAIL] = _("Acuacola"),
    [MOVE_SEED_BOMB] = _("Semilla bomba"),
    [MOVE_AIR_SLASH] = _("Tajo aéreo"),
    [MOVE_X_SCISSOR] = _("Tijera X"),
    [MOVE_BUG_BUZZ] = _("Zumbido"),
    [MOVE_DRAGON_PULSE] = _("Pulso dragón"),
    [MOVE_DRAGON_RUSH] = _("Carga dragón"),
    [MOVE_POWER_GEM] = _("Gema de luz"),
    [MOVE_DRAIN_PUNCH] = _("Puño drenaje"),
    [MOVE_VACUUM_WAVE] = _("Onda vacío"),
    [MOVE_FOCUS_BLAST] = _("Cañón zen"),
    [MOVE_ENERGY_BALL] = _("Bola energía"),
    [MOVE_BRAVE_BIRD] = _("Pájaro osado"),
    [MOVE_EARTH_POWER] = _("Tierra viva"),
    [MOVE_SWITCHEROO] = _("Trapicheo"),
    [MOVE_GIGA_IMPACT] = _("Gigaimpacto"),
    [MOVE_NASTY_PLOT] = _("Maquinación"),
    [MOVE_BULLET_PUNCH] = _("Puño bala"),
    [MOVE_AVALANCHE] = _("Alud"),
    [MOVE_ICE_SHARD] = _("Canto helado"),
    [MOVE_SHADOW_CLAW] = _("Garra umbría"),
    [MOVE_THUNDER_FANG] = _("Colmillo trueno"),
    [MOVE_ICE_FANG] = _("Colmillo helado"),
    [MOVE_FIRE_FANG] = _("Colmillo ígneo"),
    [MOVE_SHADOW_SNEAK] = _("Sombra vil"),
    [MOVE_MUD_BOMB] = _("Bomba lodo"),
    [MOVE_PSYCHO_CUT] = _("Psicocorte"),
    [MOVE_ZEN_HEADBUTT] = _("Cabezazo zen"),
    [MOVE_MIRROR_SHOT] = _("Disparo espejo"),
    [MOVE_FLASH_CANNON] = _("Cañón resplandor"),
    [MOVE_ROCK_CLIMB] = _("Treparrocas"),
    [MOVE_DEFOG] = _("Despejar"),
    [MOVE_TRICK_ROOM] = _("Espacio raro"),
    [MOVE_DRACO_METEOR] = _("Meteoro dragón"),
    [MOVE_DISCHARGE] = _("Descarga"),
    [MOVE_LAVA_PLUME] = _("Bomba lava"),
    [MOVE_LEAF_STORM] = _("Tormenta hoja"),
    [MOVE_POWER_WHIP] = _("Latigazo"),
    [MOVE_ROCK_WRECKER] = _("Romperrocas"),
    [MOVE_CROSS_POISON] = _("Veneno X"),
    [MOVE_GUNK_SHOT] = _("Lanza mugre"),
    [MOVE_IRON_HEAD] = _("Cabeza hierro"),
    [MOVE_MAGNET_BOMB] = _("Bomba magnética"),
    [MOVE_STONE_EDGE] = _("Roca afilada"),
    [MOVE_CAPTIVATE] = _("Seducción"),
    [MOVE_STEALTH_ROCK] = _("Trampa rocas"),
    [MOVE_GRASS_KNOT] = _("Hierba lazo"),
    [MOVE_CHATTER] = _("Cháchara"),
    [MOVE_JUDGMENT] = _("Juicio"),
    [MOVE_BUG_BITE] = _("Picadura"),
    [MOVE_CHARGE_BEAM] = _("Rayo carga"),
    [MOVE_WOOD_HAMMER] = _("Mazazo"),
    [MOVE_AQUA_JET] = _("Acua jet"),
    [MOVE_ATTACK_ORDER] = _("Al ataque"),
    [MOVE_DEFEND_ORDER] = _("A defender"),
    [MOVE_HEAL_ORDER] = _("Auxilio"),
    [MOVE_HEAD_SMASH] = _("Ariete"),
    [MOVE_DOUBLE_HIT] = _("Doble golpe"),
    [MOVE_ROAR_OF_TIME] = _("Rugido temporal"),
    [MOVE_SPACIAL_REND] = _("Rotura espacial"),
    [MOVE_LUNAR_DANCE] = _("Danza lunar"),
    [MOVE_CRUSH_GRIP] = _("Agarrón"),
    [MOVE_MAGMA_STORM] = _("Tormenta magma"),
    [MOVE_DARK_VOID] = _("Brecha negra"),
    [MOVE_SEED_FLARE] = _("Llama semilla"),
    [MOVE_OMINOUS_WIND] = _("Viento ominoso"),
    [MOVE_SHADOW_FORCE] = _("Fuerza sombrío"),
    [MOVE_HONE_CLAWS] = _("Afila garras"),
    [MOVE_WIDE_GUARD] = _("Vastaguardia"),
    [MOVE_GUARD_SPLIT] = _("Divide guardia"),
    [MOVE_POWER_SPLIT] = _("Divide fuerza"),
    [MOVE_WONDER_ROOM] = _("Espacio extraño"),
    [MOVE_PSYSHOCK] = _("Psicocalambre"),
    [MOVE_VENOSHOCK] = _("Carga tóxica"),
    [MOVE_AUTOTOMIZE] = _("Automatizar"),
    [MOVE_RAGE_POWDER] = _("Polvo ira"),
    [MOVE_TELEKINESIS] = _("Telekinesis"),
    [MOVE_MAGIC_ROOM] = _("Espacio mágico"),
    [MOVE_SMACK_DOWN] = _("Antiáereo"),
    [MOVE_STORM_THROW] = _("Llave corsé"),
    [MOVE_FLAME_BURST] = _("Pirotecnia"),
    [MOVE_SLUDGE_WAVE] = _("Onda tóxica"),
    [MOVE_QUIVER_DANCE] = _("Danza aleteo"),
    [MOVE_HEAVY_SLAM] = _("Golpe pesado"),
    [MOVE_SYNCHRONOISE] = _("Sincrorruido"),
    [MOVE_ELECTRO_BALL] = _("Electrobola"),
    [MOVE_SOAK] = _("Anegar"),
    [MOVE_FLAME_CHARGE] = _("Nitrocarga"),
    [MOVE_COIL] = _("Enrosque"),
    [MOVE_LOW_SWEEP] = _("Puntapié"),
    [MOVE_ACID_SPRAY] = _("Espray ácido"),
    [MOVE_FOUL_PLAY] = _("Juego sucio"),
    [MOVE_SIMPLE_BEAM] = _("Rayo simple"),
    [MOVE_ENTRAINMENT] = _("Danza amiga"),
    [MOVE_AFTER_YOU] = _("Cede paso"),
    [MOVE_ROUND] = _("Canon"),
    [MOVE_ECHOED_VOICE] = _("Eco voz"),
    [MOVE_CHIP_AWAY] = _("Guardia baja"),
    [MOVE_CLEAR_SMOG] = _("Niebla clara"),
    [MOVE_STORED_POWER] = _("Poder reserva"),
    [MOVE_QUICK_GUARD] = _("Guardia rápida"),
    [MOVE_ALLY_SWITCH] = _("Cambia aliado"),
    [MOVE_SCALD] = _("Escaldar"),
    [MOVE_SHELL_SMASH] = _("Rompecoraza"),
    [MOVE_HEAL_PULSE] = _("Pulso cura"),
    [MOVE_HEX] = _("Infortunio"),
    [MOVE_SKY_DROP] = _("Caída libre"),
    [MOVE_SHIFT_GEAR] = _("Cambia marcha"),
    [MOVE_CIRCLE_THROW] = _("Tiro circular"),
    [MOVE_INCINERATE] = _("Incineración"),
    [MOVE_QUASH] = _("Último lugar"),
    [MOVE_ACROBATICS] = _("Acrobacia"),
    [MOVE_REFLECT_TYPE] = _("Refleja tipo"),
    [MOVE_RETALIATE] = _("Redención"),
    [MOVE_FINAL_GAMBIT] = _("Gambito final"),
    [MOVE_BESTOW] = _("Ofrenda"),
    [MOVE_INFERNO] = _("Infierno"),
    [MOVE_WATER_PLEDGE] = _("Promesa agua"),
    [MOVE_FIRE_PLEDGE] = _("Promesa fuego"),
    [MOVE_GRASS_PLEDGE] = _("Promesa planta"),
    [MOVE_VOLT_SWITCH] = _("Voltiocambio"),
    [MOVE_STRUGGLE_BUG] = _("Estoicismo"),
    [MOVE_BULLDOZE] = _("Terratemblor"),
    [MOVE_FROST_BREATH] = _("Aliento helado"),
    [MOVE_DRAGON_TAIL] = _("Dracocola"),
    [MOVE_WORK_UP] = _("Entrenamiento"),
    [MOVE_ELECTROWEB] = _("Electrotela"),
    [MOVE_WILD_CHARGE] = _("Carga salvaje"),
    [MOVE_DRILL_RUN] = _("Taladradora"),
    [MOVE_DUAL_CHOP] = _("Golpe bis"),
    [MOVE_HEART_STAMP] = _("Arrumaco"),
    [MOVE_HORN_LEECH] = _("Asta drenaje"),
    [MOVE_SACRED_SWORD] = _("Espada sagrada"),
    [MOVE_RAZOR_SHELL] = _("Concha afilada"),
    [MOVE_HEAT_CRASH] = _("Golpe de calor"),
    [MOVE_LEAF_TORNADO] = _("Tornado hojas"),
    [MOVE_STEAMROLLER] = _("Apisonadora"),
    [MOVE_COTTON_GUARD] = _("Guardia algodón"),
    [MOVE_NIGHT_DAZE] = _("Brillo nocturno"),
    [MOVE_PSYSTRIKE] = _("Psicogolpe"),
    [MOVE_TAIL_SLAP] = _("Cola bofetón"),
    [MOVE_HURRICANE] = _("Huracán"),
    [MOVE_HEAD_CHARGE] = _("Carga cabeza"),
    [MOVE_GEAR_GRIND] = _("Rueda doble"),
    [MOVE_SEARING_SHOT] = _("Bomba ígnea"),
    [MOVE_TECHNO_BLAST] = _("Tecnocañón"),
    [MOVE_RELIC_SONG] = _("Canción atávica"),
    [MOVE_SECRET_SWORD] = _("Espada secreta"),
    [MOVE_GLACIATE] = _("Glaciación"),
    [MOVE_BOLT_STRIKE] = _("Voltio placaje"),
    [MOVE_BLUE_FLARE] = _("Llama azulada"),
    [MOVE_FIERY_DANCE] = _("Danza feroz"),
    [MOVE_FREEZE_SHOCK] = _("Frío paralizante"),
    [MOVE_ICE_BURN] = _("Llama gélida"),
    [MOVE_SNARL] = _("Alarido"),
    [MOVE_ICICLE_CRASH] = _("Chuzos"),
    [MOVE_V_CREATE] = _("V de fuego"),
    [MOVE_FUSION_FLARE] = _("Llama fusión"),
    [MOVE_FUSION_BOLT] = _("Voltio fusión"),
    [MOVE_FLYING_PRESS] = _("Presa voladora"),
    [MOVE_MAT_BLOCK] = _("Escudo tatami"),
    [MOVE_BELCH] = _("Eructo"),
    [MOVE_ROTOTILLER] = _("Fertilizante"),
    [MOVE_STICKY_WEB] = _("Tela pegajosa"),
    [MOVE_FELL_STINGER] = _("Aguijón final"),
    [MOVE_PHANTOM_FORCE] = _("Fuerza fantasmal"),
    [MOVE_TRICK_OR_TREAT] = _("Truco o trato"),
    [MOVE_NOBLE_ROAR] = _("Rugido noble"),
    [MOVE_ION_DELUGE] = _("Cortina plasma"),
    [MOVE_PARABOLIC_CHARGE] = _("Carga parabólica"),
    [MOVE_FORESTS_CURSE] = _("Hechizo boscal"),
    [MOVE_PETAL_BLIZZARD] = _("Tormenta pétalo"),
    [MOVE_FREEZE_DRY] = _("Hielo seco"),
    [MOVE_DISARMING_VOICE] = _("Voz hechizante"),
    [MOVE_PARTING_SHOT] = _("Última palabra"),
    [MOVE_TOPSY_TURVY] = _("Reversión"),
    [MOVE_DRAINING_KISS] = _("Beso drenaje"),
    [MOVE_CRAFTY_SHIELD] = _("Escudo mágico"),
    [MOVE_FLOWER_SHIELD] = _("Escudo floral"),
    [MOVE_GRASSY_TERRAIN] = _("Terreno herbáceo"),
    [MOVE_MISTY_TERRAIN] = _("Terreno feérico"),
    [MOVE_ELECTRIFY] = _("Electrificar"),
    [MOVE_PLAY_ROUGH] = _("Carantoña"),
    [MOVE_FAIRY_WIND] = _("Viento feérico"),
    [MOVE_MOONBLAST] = _("Cañón lunar"),
    [MOVE_BOOMBURST] = _("Estruendo"),
    [MOVE_FAIRY_LOCK] = _("Bloqueo feérico"),
    [MOVE_KINGS_SHIELD] = _("Escudo real"),
    [MOVE_PLAY_NICE] = _("Camaradería"),
    [MOVE_CONFIDE] = _("Confidencia"),
    [MOVE_DIAMOND_STORM] = _("Lluevediamantes"),
    [MOVE_STEAM_ERUPTION] = _("Chorro vapor"),
    [MOVE_HYPERSPACE_HOLE] = _("Hoyo hiperesp."),
    [MOVE_WATER_SHURIKEN] = _("Shuriken de agua"),
    [MOVE_MYSTICAL_FIRE] = _("Fuego místico"),
    [MOVE_SPIKY_SHIELD] = _("Escudo espinoso"),
    [MOVE_AROMATIC_MIST] = _("Niebla aromática"),
    [MOVE_EERIE_IMPULSE] = _("Impulso anómalo"),
    [MOVE_VENOM_DRENCH] = _("Drenaje tóxico"),
    [MOVE_POWDER] = _("Polvo"),
    [MOVE_GEOMANCY] = _("Geomancia"),
    [MOVE_MAGNETIC_FLUX] = _("Flujo magnético"),
    [MOVE_HAPPY_HOUR] = _("Hora feliz"),
    [MOVE_ELECTRIC_TERRAIN] = _("Terreno eléc."),
    [MOVE_DAZZLING_GLEAM] = _("Brillo mágico"),
    [MOVE_CELEBRATE] = _("Celebración"),
    [MOVE_HOLD_HANDS] = _("Clemencia"),
    [MOVE_BABY_DOLL_EYES] = _("Ojitos tiernos"),
    [MOVE_NUZZLE] = _("Moflete estático"),
    [MOVE_HOLD_BACK] = _("Apretón de manos"),
    [MOVE_INFESTATION] = _("Infestación"),
    [MOVE_POWER_UP_PUNCH] = _("Puño incremento"),
    [MOVE_OBLIVION_WING] = _("Ala mortífera"),
    [MOVE_THOUSAND_ARROWS] = _("Mil flechas"),
    [MOVE_THOUSAND_WAVES] = _("Mil olas"),
    [MOVE_LANDS_WRATH] = _("Fuerza telúrica"),
    [MOVE_LIGHT_OF_RUIN] = _("Luz ruinosa"),
    [MOVE_ORIGIN_PULSE] = _("Pulso origen"),
    [MOVE_PRECIPICE_BLADES] = _("Filos del abismo"),
    [MOVE_DRAGON_ASCENT] = _("Dracoascensión"),
    [MOVE_HYPERSPACE_FURY] = _("Furia espacial"),
    [MOVE_SHORE_UP] = _("Recogearena"),
    [MOVE_FIRST_IMPRESSION] = _("Primera vista"),
    [MOVE_BANEFUL_BUNKER] = _("Búnker"),
    [MOVE_SPIRIT_SHACKLE] = _("Puntada sombría"),
    [MOVE_DARKEST_LARIAT] = _("Lariat oscuro"),
    [MOVE_SPARKLING_ARIA] = _("Aria burbujeante"),
    [MOVE_ICE_HAMMER] = _("Martillo helado"),
    [MOVE_IRON_HAMMER] = _("Martillo de hierro"),
    [MOVE_FLORAL_HEALING] = _("Cura selvática"),
    [MOVE_HIGH_HORSEPOWER] = _("Fuerza equina"),
    [MOVE_STRENGTH_SAP] = _("Chupafuerzas"),
    [MOVE_SOLAR_BLADE] = _("Hoja solar"),
    [MOVE_LEAFAGE] = _("Follaje"),
    [MOVE_SPOTLIGHT] = _("Foco"),
    [MOVE_TOXIC_THREAD] = _("Amenaza tóxica"),
    [MOVE_LASER_FOCUS] = _("Foco laser"),
    [MOVE_GEAR_UP] = _("Piñón auxiliar"),
    [MOVE_THROAT_CHOP] = _("Tajo mordaza"),
    [MOVE_POLLEN_PUFF] = _("Bola de polen"),
    [MOVE_ANCHOR_SHOT] = _("Tiro ancla"),
    [MOVE_PSYCHIC_TERRAIN] = _("Psicoterreno"),
    [MOVE_LUNGE] = _("Plancha"),
    [MOVE_FIRE_LASH] = _("Látigo ígneo"),
    [MOVE_POWER_TRIP] = _("Chulería"),
    [MOVE_BURN_UP] = _("Llama final"),
    [MOVE_SPEED_SWAP] = _("Cambia velocidad"),
    [MOVE_SMART_STRIKE] = _("Cuerno certero"),
    [MOVE_PURIFY] = _("Purificación"),
    [MOVE_REVELATION_DANCE] = _("Danza revelación"),
    [MOVE_CORE_ENFORCER] = _("Núcleo ejecutor"),
    [MOVE_TROP_KICK] = _("Patada tropical"),
    [MOVE_INSTRUCT] = _("Instrucción"),
    [MOVE_BEAK_BLAST] = _("Pico cañón"),
    [MOVE_CLANGING_SCALES] = _("Escala metálica"),
    [MOVE_DRAGON_HAMMER] = _("Dracomartillo"),
    [MOVE_BRUTAL_SWING] = _("Golpe brutal"),
    [MOVE_AURORA_VEIL] = _("Velo aurora"),
    [MOVE_SHELL_TRAP] = _("Caparazón trampa"),
    [MOVE_FLEUR_CANNON] = _("Cañón floral"),
    [MOVE_PSYCHIC_FANGS] = _("Psicolmillo"),
    [MOVE_STOMPING_TANTRUM] = _("Patada berrinche"),
    [MOVE_SHADOW_BONE] = _("Hueso sombrío"),
    [MOVE_ACCELEROCK] = _("Roca veloz"),
    [MOVE_LIQUIDATION] = _("Liquidación"),
    [MOVE_PRISMATIC_LASER] = _("Laser prismático"),
    [MOVE_SPECTRAL_THIEF] = _("Ladrón espectral"),
    [MOVE_SUNSTEEL_STRIKE] = _("Golpe acerosol"),
    [MOVE_MOONGEIST_BEAM] = _("Rayo lunar"),
    [MOVE_TEARFUL_LOOK] = _("Ojos llorosos"),
    [MOVE_ZING_ZAP] = _("Electropunzada"),
    [MOVE_NATURES_MADNESS] = _("Nature's Madness"),
    [MOVE_MULTI_ATTACK] = _("Multiataque"),
    [MOVE_MIND_BLOWN] = _("Cabeza sorpresa"),
    [MOVE_PLASMA_FISTS] = _("Puños plasma"),
    [MOVE_PHOTON_GEYSER] = _("Photon Geyser"),
    [MOVE_ZIPPY_ZAP] = _("Zippy Zap"),
    [MOVE_SPLISHY_SPLASH] = _("Splishy Splash"),
    [MOVE_FLOATY_FALL] = _("Floaty Fall"),
    [MOVE_PIKA_PAPOW] = _("Pika Papow"),
    [MOVE_BOUNCY_BUBBLE] = _("Bouncy Bubble"),
    [MOVE_BUZZY_BUZZ] = _("Buzzy Buzz"),
    [MOVE_SIZZLY_SLIDE] = _("Sizzly Slide"),
    [MOVE_GLITZY_GLOW] = _("Glitzy Glow"),
    [MOVE_BADDY_BAD] = _("Baddy Bad"),
    [MOVE_SAPPY_SEED] = _("Sappy Seed"),
    [MOVE_FREEZY_FROST] = _("Freezy Frost"),
    [MOVE_SPARKLY_SWIRL] = _("Sparkly Swirl"),
    [MOVE_VEEVEE_VOLLEY] = _("Veevee Volley"),
    [MOVE_DOUBLE_IRON_BASH] = _("Doble herronada"),
    [MOVE_DYNAMAX_CANNON] = _("Cañón Dynamax"),
    [MOVE_SNIPE_SHOT] = _("Francotirador"),
    [MOVE_JAW_LOCK] = _("Presa maxilar"),
    [MOVE_STUFF_CHEEKS] = _("Atiborramiento"),
    [MOVE_NO_RETREAT] = _("Bastión final"),
    [MOVE_TAR_SHOT] = _("Alquitranazo"),
    [MOVE_MAGIC_POWDER] = _("Polvos mágicos"),
    [MOVE_DRAGON_DARTS] = _("Dracodardos"),
    [MOVE_TEATIME] = _("Hora del té"),
    [MOVE_OCTOLOCK] = _("Octopresa"),
    [MOVE_BOLT_BEAK] = _("Pico voltio"),
    [MOVE_FISHIOUS_REND] = _("Destripe"),
    [MOVE_COURT_CHANGE] = _("Cambiacampo"),
    [MOVE_CLANGOROUS_SOUL] = _("Estruendo aural"),
    [MOVE_BODY_PRESS] = _("Presa corporal"),
    [MOVE_DECORATE] = _("Decorar"),
    [MOVE_DRUM_BEATING] = _("Golpe de tambor"),
    [MOVE_SNAP_TRAP] = _("Ratonera"),
    [MOVE_PYRO_BALL] = _("Pirobola"),
    [MOVE_BEHEMOTH_BLADE] = _("Espada gigante"),
    [MOVE_BEHEMOTH_BASH] = _("Asalto gigante"),
    [MOVE_AURA_WHEEL] = _("Rueda aural"),
    [MOVE_BREAKING_SWIPE] = _("Vasto impacto"),
    [MOVE_BRANCH_POKE] = _("Ramazo"),
    [MOVE_OVERDRIVE] = _("Amplificador"),
    [MOVE_APPLE_ACID] = _("Manzana ácida"),
    [MOVE_GRAV_APPLE] = _("Manzana gravedad"),
    [MOVE_SPIRIT_BREAK] = _("Rompespiritú"),
    [MOVE_STRANGE_STEAM] = _("Humo extraño"),
    [MOVE_LIFE_DEW] = _("Rocío vida"),
    [MOVE_OBSTRUCT] = _("Obstrucción"),
    [MOVE_FALSE_SURRENDER] = _("Falsa rendición"),
    [MOVE_METEOR_ASSAULT] = _("Asalto meteoro"),
    [MOVE_ETERNABEAM] = _("Rayo eterno"),
    [MOVE_STEEL_BEAM] = _("Rayo láser"),
    [MOVE_EXPANDING_FORCE] = _("Fuerza expansiva"),
    [MOVE_STEEL_ROLLER] = _("Metapisonadora"),
    [MOVE_SCALE_SHOT] = _("Tiro escalar"),
    [MOVE_METEOR_BEAM] = _("Rayo meteórico"),
    [MOVE_SHELL_SIDE_ARM] = _("Moluscañón"),
    [MOVE_MISTY_EXPLOSION] = _("Explosión niebla"),
    [MOVE_GRASSY_GLIDE] = _("Planeo herbáceo"),
    [MOVE_RISING_VOLTAGE] = _("Sube voltaje"),
    [MOVE_TERRAIN_PULSE] = _("Pulso terreno"),
    [MOVE_SKITTER_SMACK] = _("Golpe deslizante"),
    [MOVE_BURNING_JEALOUSY] = _("Envidia ardiente"),
    [MOVE_LASH_OUT] = _("Arremetida"),
    [MOVE_POLTERGEIST] = _("Posesión"),
    [MOVE_CORROSIVE_GAS] = _("Gas corrosivo"),
    [MOVE_COACHING] = _("Entrenamiento"),
    [MOVE_FLIP_TURN] = _("Viraje"),
    [MOVE_TRIPLE_AXEL] = _("Triple axel"),
    [MOVE_DUAL_WINGBEAT] = _("Aleteo doble"),
    [MOVE_SCORCHING_SANDS] = _("Arena candente"),
    [MOVE_JUNGLE_HEALING] = _("Cura selvática"),
    [MOVE_WICKED_BLOW] = _("Golpe malvado"),
    [MOVE_SURGING_STRIKES] = _("Azote torrencial"),
    [MOVE_THUNDER_CAGE] = _("Cárcel eléctrica"),
    [MOVE_DRAGON_ENERGY] = _("Dracoenergía"),
    [MOVE_FREEZING_GLARE] = _("Mirada heladora"),
    [MOVE_FIERY_WRATH] = _("Llama feroz"),
    [MOVE_THUNDEROUS_KICK] = _("Patada eléctrica"),
    [MOVE_GLACIAL_LANCE] = _("Lanza glacial"),
    [MOVE_ASTRAL_BARRAGE] = _("Presa astral"),
    [MOVE_EERIE_SPELL] = _("Conjuro extraño"),
    [MOVE_DIRE_CLAW] = _("Dire Claw"),
    [MOVE_PSYSHIELD_BASH] = _("Psyshield Bash"),
    [MOVE_POWER_SHIFT] = _("Power Shift"),
    [MOVE_STONE_AXE] = _("Stone Axe"),
    [MOVE_SPRINGTIDE_STORM] = _("Springtide Storm"),
    [MOVE_MYSTICAL_POWER] = _("Mystical Power"),
    [MOVE_RAGING_FURY] = _("Raging Fury"),
    [MOVE_WAVE_CRASH] = _("Wave Crash"),
    [MOVE_CHLOROBLAST] = _("Chloroblast"),
    [MOVE_MOUNTAIN_GALE] = _("Mountain Gale"),
    [MOVE_VICTORY_DANCE] = _("Victory Dance"),
    [MOVE_HEADLONG_RUSH] = _("Headlong Rush"),
    [MOVE_BARB_BARRAGE] = _("Barb Barrage"),
    [MOVE_ESPER_WING] = _("Esper Wing"),
    [MOVE_BITTER_MALICE] = _("Bitter Malice"),
    [MOVE_SHELTER] = _("Shelter"),
    [MOVE_TRIPLE_ARROWS] = _("Triple Arrows"),
    [MOVE_INFERNAL_PARADE] = _("Infernal Parade"),
    [MOVE_CEASELESS_EDGE] = _("Ceaseless Edge"),
    [MOVE_BLEAKWIND_STORM] = _("Bleakwind Storm"),
    [MOVE_WILDBOLT_STORM] = _("Wildbolt Storm"),
    [MOVE_SANDSEAR_STORM] = _("Sandsear Storm"),
    [MOVE_LUNAR_BLESSING] = _("Lunar Blessing"),
    [MOVE_TAKE_HEART] = _("Take Heart"),
};

static const u8 sText_Breakneck_Blitz[] = _("Breakneck Blitz");
static const u8 sText_All_Out_Pummeling[] = _("All Out Pummeling");
static const u8 sText_Supersonic_Skystrike[] = _("Supersonic Skystrike");
static const u8 sText_Acid_Downpour[] = _("Acid Downpour");
static const u8 sText_Tectonic_Rage[] = _("Tectonic Rage");
static const u8 sText_Continental_Crush[] = _("Continental Crush");
static const u8 sText_Savage_Spin_Out[] = _("Savage Spin Out");
static const u8 sText_Never_Ending_Nightmare[] = _("Never Ending Nightmare");
static const u8 sText_Corkscrew_Crash[] = _("Corkscrew Crash");
static const u8 sText_Inferno_Overdrive[] = _("Inferno Overdrive");
static const u8 sText_Hydro_Vortex[] = _("Hydro Vortex");
static const u8 sText_Bloom_Doom[] = _("Bloom Doom");
static const u8 sText_Gigavolt_Havoc[] = _("Gigavolt Havoc");
static const u8 sText_Shattered_Psyche[] = _("Shattered Psyche");
static const u8 sText_Subzero_Slammer[] = _("Subzero Slammer");
static const u8 sText_Devastating_Drake[] = _("Devastating Drake");
static const u8 sText_Black_Hole_Eclipse[] = _("Black Hole Eclipse");
static const u8 sText_Twinkle_Tackle[] = _("Twinkle Tackle");
static const u8 sText_Catastropika[] = _("Catastropika");
static const u8 sText_10000000_Volt_Thunderbolt[] = _("10000000 Volt Thunderbolt");
static const u8 sText_Stoked_Sparksurfer[] = _("Stoked Sparksurfer");
static const u8 sText_Extreme_Evoboost[] = _("Extreme Evoboost");
static const u8 sText_Pulverizing_Pancake[] = _("Pulverizing Pancake");
static const u8 sText_Genesis_Supernova[] = _("Genesis Supernova");
static const u8 sText_Sinister_Arrow_Raid[] = _("Sinister Arrow Raid");
static const u8 sText_Malicious_Moonsault[] = _("Malicious Moonsault");
static const u8 sText_Oceanic_Operetta[] = _("Oceanic Operetta");
static const u8 sText_Splintered_Stormshards[] = _("Splintered Stormshards");
static const u8 sText_Lets_Snuggle_Forever[] = _("Let's Snuggle Forever");
static const u8 sText_Clangorous_Soulblaze[] = _("Clangorous Soulblaze");
static const u8 sText_Guardian_Of_Alola[] = _("Guardian Of Alola");
static const u8 sText_Searing_Sunraze_Smash[] = _("Searing Sunraze Smash");
static const u8 sText_Menacing_Moonraze_Maelstrom[] = _("Menacing Moonraze Maelstrom");
static const u8 sText_Light_That_Burns_The_Sky[] = _("Light That Burns The Sky");
static const u8 sText_Soul_Stealing_7_Star_Strike[] = _("Soul Stealing 7 Star Strike");

const u8 *const gZMoveNames[] =
{
    [MOVE_BREAKNECK_BLITZ - FIRST_Z_MOVE] = sText_Breakneck_Blitz,
    [MOVE_ALL_OUT_PUMMELING - FIRST_Z_MOVE] = sText_All_Out_Pummeling,
    [MOVE_SUPERSONIC_SKYSTRIKE - FIRST_Z_MOVE] = sText_Supersonic_Skystrike,
    [MOVE_ACID_DOWNPOUR - FIRST_Z_MOVE] = sText_Acid_Downpour,
    [MOVE_TECTONIC_RAGE - FIRST_Z_MOVE] = sText_Tectonic_Rage,
    [MOVE_CONTINENTAL_CRUSH - FIRST_Z_MOVE] = sText_Continental_Crush,
    [MOVE_SAVAGE_SPIN_OUT - FIRST_Z_MOVE] = sText_Savage_Spin_Out,
    [MOVE_NEVER_ENDING_NIGHTMARE - FIRST_Z_MOVE] = sText_Never_Ending_Nightmare,
    [MOVE_CORKSCREW_CRASH - FIRST_Z_MOVE] = sText_Corkscrew_Crash,
    [MOVE_INFERNO_OVERDRIVE - FIRST_Z_MOVE] = sText_Inferno_Overdrive,
    [MOVE_HYDRO_VORTEX - FIRST_Z_MOVE] = sText_Hydro_Vortex,
    [MOVE_BLOOM_DOOM - FIRST_Z_MOVE] = sText_Bloom_Doom,
    [MOVE_GIGAVOLT_HAVOC - FIRST_Z_MOVE] = sText_Gigavolt_Havoc,
    [MOVE_SHATTERED_PSYCHE - FIRST_Z_MOVE] = sText_Shattered_Psyche,
    [MOVE_SUBZERO_SLAMMER - FIRST_Z_MOVE] = sText_Subzero_Slammer,
    [MOVE_DEVASTATING_DRAKE - FIRST_Z_MOVE] = sText_Devastating_Drake,
    [MOVE_BLACK_HOLE_ECLIPSE - FIRST_Z_MOVE] = sText_Black_Hole_Eclipse,
    [MOVE_TWINKLE_TACKLE - FIRST_Z_MOVE] = sText_Twinkle_Tackle,
    [MOVE_CATASTROPIKA - FIRST_Z_MOVE] = sText_Catastropika,
    [MOVE_10000000_VOLT_THUNDERBOLT - FIRST_Z_MOVE] = sText_10000000_Volt_Thunderbolt,
    [MOVE_STOKED_SPARKSURFER - FIRST_Z_MOVE] = sText_Stoked_Sparksurfer,
    [MOVE_EXTREME_EVOBOOST - FIRST_Z_MOVE] = sText_Extreme_Evoboost,
    [MOVE_PULVERIZING_PANCAKE - FIRST_Z_MOVE] = sText_Pulverizing_Pancake,
    [MOVE_GENESIS_SUPERNOVA - FIRST_Z_MOVE] = sText_Genesis_Supernova,
    [MOVE_SINISTER_ARROW_RAID - FIRST_Z_MOVE] = sText_Sinister_Arrow_Raid,
    [MOVE_MALICIOUS_MOONSAULT - FIRST_Z_MOVE] = sText_Malicious_Moonsault,
    [MOVE_OCEANIC_OPERETTA - FIRST_Z_MOVE] = sText_Oceanic_Operetta,
    [MOVE_SPLINTERED_STORMSHARDS - FIRST_Z_MOVE] = sText_Splintered_Stormshards,
    [MOVE_LETS_SNUGGLE_FOREVER - FIRST_Z_MOVE] = sText_Lets_Snuggle_Forever,
    [MOVE_CLANGOROUS_SOULBLAZE - FIRST_Z_MOVE] = sText_Clangorous_Soulblaze,
    [MOVE_GUARDIAN_OF_ALOLA - FIRST_Z_MOVE] = sText_Guardian_Of_Alola,
    [MOVE_SEARING_SUNRAZE_SMASH - FIRST_Z_MOVE] = sText_Searing_Sunraze_Smash,
    [MOVE_MENACING_MOONRAZE_MAELSTROM - FIRST_Z_MOVE] = sText_Menacing_Moonraze_Maelstrom,
    [MOVE_LIGHT_THAT_BURNS_THE_SKY - FIRST_Z_MOVE] = sText_Light_That_Burns_The_Sky,
    [MOVE_SOUL_STEALING_7_STAR_STRIKE - FIRST_Z_MOVE] = sText_Soul_Stealing_7_Star_Strike,
};
