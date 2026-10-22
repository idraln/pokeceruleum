#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(ME_FIRST) \
    F(HEADBUTT) \
    F(WATER_PULSE) \
    F(METAL_SOUND) \
    F(TICKLE) \
    F(TOXIC) \
    F(HAIL) \
    F(ROOST) \
    F(SWEET_KISS) \
    F(LEECH_SEED) \
    F(SUNNY_DAY) \
    F(TAUNT) \
    F(ICE_BEAM) \
    F(COIL) \
    F(HYPER_BEAM) \
    F(LIGHT_SCREEN) \
    F(DESTINY_BOND) \
    F(RAIN_DANCE) \
    F(GIGA_DRAIN) \
    F(SAFEGUARD) \
    F(METAL_CLAW) \
    F(SCALD) \
    F(GYRO_BALL) \
    F(THUNDERBOLT) \
    F(DRAGON_DANCE) \
    F(EARTHQUAKE) \
    F(RETURN) \
    F(GLARE) \
    F(PSYCHIC) \
    F(SHADOW_BALL) \
    F(BRICK_BREAK) \
    F(DOUBLE_TEAM) \
    F(GRASS_KNOT) \
    F(SING) \
    F(FLAMETHROWER) \
    F(SLUDGE_BOMB) \
    F(DAZZLING_GLEAM) \
    F(COSMIC_POWER) \
    F(TAILWIND) \
    F(AERIAL_ACE) \
    F(FIRE_PUNCH) \
    F(THUNDER_PUNCH) \
    F(ICE_PUNCH) \
    F(REST) \
    F(POISON_JAB) \
    F(ACID_ARMOR) \
    F(SIGNAL_BEAM) \
    F(WATER_SPOUT) \
    F(ROCK_CLIMB) \
    F(ERUPTION) \
    F(BOOMBURST)

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
