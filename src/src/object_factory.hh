#ifndef _OBJECT_FACTORY__H_
#define _OBJECT_FACTORY__H_

#include <stdint.h>
#include "Box2D/Box2D.h"
#include <vector>
#include "types.hh"

class item;

enum {
    O_PLANK                 = 0,
    O_THICK_PLANK           = 1,
    O_BALL                  = 2,
    O_CYLINDER              = 3,
    O_SUBLAYER_PLANK        = 4,
    O_PLATFORM              = 5,
    O_METAL_BALL            = 6,
    O_RAIL_STRAIGHT         = 7,
    O_RAIL_SKEWED_1         = 8,
    O_RAIL_SKEWED_2         = 9,
    O_RAIL45DEG             = 10,
    O_TRAMPOLINE            = 11,
    O_ROPE                  = 12,
    O_WHEEL                 = 13,
    O_MAGNET                = 14,
    O_SEESAW                = 15,
    O_OPEN_PIVOT            = 16,
    O_BALL_PIPELINE         = 17,
    O_GEARBOX               = 18,
    O_DAMPER                = 19,
    O_DC_MOTOR              = 20,
    O_SERVO_MOTOR           = 21,
    O_LINEAR_MOTOR          = 22,
    O_LINEAR_SERVO_MOTOR    = 23,
    O_CT_MINI               = 24,
    O_CT_SERVO              = 25,
    O_CT_FEEDBACK           = 26,
    O_RC_BASIC              = 27,
    O_RC_IO3                = 28,
    O_RC_MONSTRO            = 29,
    O_WALL_PIVOT            = 30,
    O_BATTERY               = 31,
    O_POWER_SUPPLY          = 32,
    O_POWER_CABLE           = 33,
    O_SIGNAL_CABLE          = 34,
    O_INTERFACE_CABLE       = 35,
    O_MAGNETIC_PLUG         = 36,
    O_MAGNETIC_SOCKET       = 37,
    O_SWITCH                = 38,
    O_INTERFACE_CLIP        = 39,
    O_GYROSCOPE             = 40,
    O_BUTTON                = 41,
    O_XORGATE               = 42,
    O_ORGATE                = 43,
    O_ANDGATE               = 44,
    O_NANDGATE              = 45,
    O_INVERTERGATE          = 46,
    O_INTEGERGATE           = 47,
    O_SQUAREGATE            = 48,
    O_SQRTGATE              = 49,
    O_SPARSIFIER            = 50,
    O_BESSERWISSER          = 51,
    O_EPSILON               = 52,
    O_CLAMP                 = 53,
    O_TOGGLER               = 54,
    O_FIFO                  = 55,
    O_MAVG                  = 56,
    O_CAVG                  = 57,
    O_DEBUGGER              = 58,
    O_ROBOT                 = 59,
    O_STICKY_NOTE           = 60,
    O_CUP                   = 61,
    O_DUMMY                 = 62,
    O_BREADBOARD            = 63,
    O_COMMAND_PAD           = 64,
    O_GOAL                  = 65,
    O_GAMEMAN               = 66,
    O_DAMPER_2              = 67,
    O_RUBBER_BEAM           = 68,
    O_OPEN_PIVOT_2          = 69,
    O_CORNER                = 70,
    O_SCANNER               = 71,
    O_TILTMETER             = 72,
    O_THRUSTER              = 73,
    O_ROCKET                = 74,
    O_PROXIMITYSENSOR       = 75,
    O_YSPLITTER             = 76,
    O_VALUESHIFT            = 77,
    O_TOGGLEBUTTON          = 78,
    O_IFGATE                = 79,
    O_ID_FIELD              = 80,
    O_INTERACTIVE_CYLINDER  = 81,
    O_DRAGFIELD             = 82,
    O_EMITTER               = 83,
    O_LANDMINE              = 84,
    O_BOMB                  = 85,
    O_ABSORBER              = 86,
    O_TIMER                 = 87,
    O_MINI_EMITTER          = 88,
    O_MINI_ABSORBER         = 89,
    O_CONVEYOR              = 90,
    O_ELECTROMAGNET         = 91,
    O_PLASTIC_BEAM          = 92,
    O_WOODBOX               = 93,
    O_RESISTOR              = 94,
    O_RUBBERBAND            = 95,
    O_RUBBERBAND_2          = 96,
    O_ANGULARDAMPER         = 97,
    O_OBJECT_FINDER         = 98,
    O_PRESSURE_SENSOR       = 99,
    O_SINCOS                = 100,
    O_SINEWAVE              = 101,
    O_ERANDOM               = 102,
    O_MEMORY                = 103,
    O_GRAVITY_MANAGER       = 104,
    O_GRAVITY_SETTER        = 105,
    O_SAWTOOTH              = 106,
    O_JUMPER                = 107,
    O_IBOX                  = 108,
    O_IBALL                 = 109,
    O_HALFUNPACK            = 110,
    O_HALFPACK              = 111,
    O_EATAN2                = 112,
    O_POINTER               = 113,
    O_SPIKES                = 114,
    O_OBJECT_FIELD          = 115,
    O_SUM                   = 116,
    O_SIGNALCLIP            = 117,
    O_AVG                   = 118,
    O_MULADD                = 119,
    O_GEAR                  = 120,
    O_CAM_MARKER            = 121,
    O_PIXEL                 = 122,
    O_RECEIVER              = 123,
    O_TRANSMITTER           = 124,
    O_BROADCASTER           = 125,
    O_FAN                   = 126,
    O_MIN                   = 127,
    O_MAX                   = 128,
    O_BACKPACK              = 129,
    O_STABILIZER            = 130,
    O_PKG_WARP              = 131,
    O_PKG_STATUS            = 132,
    O_CAM_TARGETER          = 133,
    O_CONDENSER             = 134,
    O_FX_EMITTER            = 135,
    O_EMUL                  = 136,
    O_XSMALLPANEL           = 137,
    O_ESUB                  = 138,
    O_MINI_TRANSMITTER      = 139,
    O_CHECKPOINT            = 140,
    O_SPIKEBOT              = 141,
    O_COMPANION             = 142,
    O_BOMBER                = 143,
    O_IMPACT_SENSOR         = 144,
    O_LOBBER                = 145,
    O_HP_CONTROL            = 146,
    O_LASER                 = 147,
    O_MULTI_EMITTER         = 148,
    O_SIMPLE_MOTOR          = 149,
    O_ANGULARVELMETER       = 150,
    O_MIRROR                = 151,
    O_LASERSENSOR           = 152,
    O_VELMETER              = 153,
    O_WRAPADD               = 154,
    O_WRAPSUB               = 155,
    O_EVENT_LISTENER        = 156,
    O_PASSIVE_DISPLAY       = 157,
    O_CEILGATE              = 158,
    O_RC_ACTIVATOR          = 159,
    O_CURSOR_FINDER         = 160,
    O_AUTOABSORBER          = 161,
    O_WRAPDIST              = 162,
    O_WEIGHT                = 163,
    O_DECAY                 = 164,
    O_CAM_ZOOMER            = 165,
    O_TIMECTRL              = 166,
    O_PROMPT                = 167,
    O_GRAPH                 = 168,
    O_WRAPCONDENSER         = 169,
    O_IFELSE                = 170,
    O_CMPE                  = 171,
    O_CMPL                  = 172,
    O_CMPLE                 = 173,
    O_SFX_EMITTER           = 174,
    O_SYNTHESIZER           = 175,
    O_VAR_GETTER            = 176,
    O_VAR_SETTER            = 177,
    O_SNAP                  = 178,
    O_SEQUENCER             = 179,
    O_SHAPE_EXTRUDER        = 180,
    O_LINEAR_DECAY          = 181,
    O_LIMIT                 = 182,
    O_CURSORFIELD           = 183,
    O_ESCRIPT               = 184,
    O_TPIXEL                = 185,
    O_ITEM                  = 186,
    O_OILRIG                = 187,
    O_FACTORY               = 188,
    O_CRANE                 = 189,
    O_FLUID                 = 190,
    O_LOCALGRAVITY          = 191,
    O_AUTOPROTECTOR         = 192,
    O_ACTIVE_DISPLAY        = 193,
    O_PBOX                  = 194,
    O_BOUNDARY              = 195,
    O_ROBOTMAN              = 196,
    O_CHUNK                 = 197,
    O_SUCTION_CUP           = 198,
    O_SOUNDMAN              = 199,
    O_ROBOT_FACTORY         = 200,
    O_MINIBOT               = 201,
    O_ARMORY                = 202,
    O_SEPARATOR             = 203,
    O_ROOM                  = 204,
    O_OIL_MIXER             = 205,
    O_REPAIR_STATION        = 206,
    O_GUARDPOINT            = 207,
    O_TARGET_SETTER         = 208,
    O_LADDER                = 209,
    O_RESOURCE              = 210,
    O_VENDOR                = 211,
    O_PLANT                 = 212,
    O_ANIMAL                = 213,
    O_PLAYER_ACTIVATOR      = 214,
    O_PLASTIC_POLYGON       = 215,
    O_KEY_LISTENER          = 216,
    O_STATE_SAVER           = 217,
    O_IFSELECT              = 218,
    O_CAMERA_ROTATOR        = 219,
    O_LEVEL_MANAGER         = 220,
    O_TREASURE_CHEST        = 221,
    O_DECORATION            = 222,
    O_MEGASPLITTER          = 223,
    O_LADDER_STEP           = 224,
    O_MINI_SPIKEBOT         = 225,

    MAX_OF_ID,
};

class lvlbuf;
class entity;
class group;

class of
{
  public:
    static uint32_t _id; /* global entity id counter */

    static const int num_categories = 10;

    static const char *get_object_description(entity *e);
    static const char *get_object_name(entity *e);
    static const char *get_object_name_by_gid(uint32_t gid);

    static const char *get_item_name(uint32_t item_id);
    static const char *get_item_description(uint32_t item_id);

    static int get_num_objects(int cat);
    static const char *get_category_name(int x);
    static const char *get_category_hint(int x);

    static entity *create(p_gid g_id);
    static item *create_item(uint32_t item_id);
    static entity *create_with_id(p_gid g_id, uint32_t id);

    static void init(void);

    static entity* read(lvlbuf *lb, uint8_t version, uint32_t id_modifier=0, b2Vec2 displacement=b2Vec2(0.f,0.f), std::vector<chunk_pos> *affected_chunks=0);
    static void write(lvlbuf *lb, uint8_t version, entity *e, uint32_t id_modifier=0, b2Vec2 displacement=b2Vec2(0.f,0.f), bool write_states=false);

    static group* read_group(lvlbuf *lb, uint8_t version, uint32_t id_modifier=0, b2Vec2 displacement=b2Vec2(0.f,0.f));
    static void write_group(lvlbuf *lb, uint8_t version, group *e, uint32_t id_modifier=0, b2Vec2 displacement=b2Vec2(0.f,0.f), bool write_states=false);

    static int get_gid(int category, int child);
    static uint32_t get_next_id(void);
};

#endif
