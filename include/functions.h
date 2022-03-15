
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "global.h"
#include "entity.h"
#include "manager.h"
#include "coord.h"
#include "player.h"
#include "room.h"
#include "structures.h"
#include "script.h"
#include "map.h"

// Identified - to be sorted into header files
extern void CalculateEntityTileCollisions(Entity*, u32, u32);
extern u32 CheckOnScreen(Entity*);
extern u32 CheckRegionOnScreen(u32, u32, u32, u32);
extern void CopyOAM(void);
extern void CreateChestSpawner(Entity*);
extern Entity* CreateGroundItem(Entity*, u32, u32);
extern Entity* CreateGroundItemWithFlags(Entity*, u32, u32, u32);
extern void CreateItemOnGround(Entity*);
extern Entity* CreateLargeWaterTrace(Entity*);
extern void CreateMagicSparkles(u32, u32, u32);
extern void CreateMinishEntrance(u32 tile);
extern Entity* CreatePlayerBomb(ItemBehavior*, u32);
extern u32 CreateRandomItemDrop(Entity*, u32);
extern void CreateSparkle(Entity*);
extern void DoPlayerAction(Entity*);
extern void DrawDirect(u32, u32); // trampoline to sub_080B27F4
extern void DrawEntities(void);
extern void DrawOAMCmd(void);
extern void EnemyFunctionHandlerAfterCollision(Entity*, void (*const[])());
extern bool32 EntityWithinDistance(Entity*, s32, s32, s32);
extern void FlushSprites(void);
extern void GenericKnockback2(Entity*);
extern LayerStruct* GetLayerByIndex(u32);
extern u32 GetRandomByWeight(const u8*);
extern u32 GetTileIndex(u32, u32);
extern u32 GiveItem(u32, u32);
extern void HandlePlayerLife(Entity*);
extern bool32 HasSwordEquipped();
extern bool32 IsColliding(Entity*, Entity*);
extern bool32 IsCollidingPlayer(Entity*);
extern bool32 IsProjectileOffScreen(Entity*);
extern bool32 IsTileCollision(const u8*, s32, s32, u32);
extern void LinearMoveAngle(Entity*, u32, u32);
extern void LinearMoveDirection(Entity*, u32, u32);
extern bool32 LoadFixedGFX(Entity*, u32);
extern void LoadResources(void);
extern bool32 LoadSwapGFX(Entity*, u16, u32);
extern void MenuFadeIn(u32, u32);
extern void ModBombs(s32);
extern u32 PlayerInRange(Entity*, u32, u32);
extern bool32 ProcessMovement1(Entity*);
extern bool32 ProcessMovement12(Entity*);
extern bool32 ProcessMovement2(Entity*);
extern bool32 ProcessMovement3(Entity*);
extern bool32 ProcessMovement4(Entity*);
extern bool32 ProcessMovement5(Entity*);
extern bool32 ProcessMovement6(Entity*);
extern bool32 ProcessMovementInternal(Entity*, s32, s32, u32);
extern void SetDirtTile(u32);
/** @see Item */
extern void SetInventoryValue(u32, u32);
/**
 * @brief Sets multiple tiles at once
 *
 * @param tileData [u16 tileIndex, s16 positionOffset], ends with 0xffff
 * @param basePosition the position the offsets in tileData are based on
 * @param layer the tile layer
 */
extern void SetMultipleTiles(u16* tileData, u32 basePosition, u32 layer);
extern void SoundReqClipped(Entity*, u32);
extern void TryLoadPrologueHyruleTown(void);
extern void UnloadGFXSlots(Entity*);
extern void UnloadOBJPalette(Entity*);
extern void UpdateDisplayControls(void);
extern void UpdateItemAnim(ItemBehavior*);
extern void UpdatePlayerMovement(void);

// Unidentified
extern void sub_08000148(u32, u32, u32);
extern u32 sub_080B1A0C(Entity*, s32, s32);
extern u32 sub_080B1A48(u32, u32, u32);
extern u32 sub_080B1A8C(Entity*, u32, u32);
extern u32 sub_080B1AA8(Entity*);
extern u32 sub_080B1AE0(u16, u8);
extern u32 sub_080B1AF0(Entity*, s32, s32);
extern u32 sub_080B1B18(s32, s32, u32);
extern u32 sub_080B1B44(u32, u32);
extern s32 sub_080012DC(Entity*);
extern void sub_08001318(Entity*);
extern u32 sub_0800132C(Entity*, Entity*);
extern void sub_080027EA(Entity*, u32, u32);
extern void sub_080028E0(Entity*);
extern u32 sub_080040A2(Entity*);
extern u32 sub_080040D8(Entity*, u8*, s32, s32);
extern void sub_08004168(Entity*);
extern u32 sub_0800419C(Entity*, Entity*, u32, u32);
extern u32 sub_080041DC(Entity*, u32, u32);
extern void sub_080042BA(Entity*, u32);
extern void sub_080042D0(Entity*, u32, u16);
extern void sub_080043A8(Entity*);
extern u32 sub_0800445C(Entity*);
extern void sub_080044AE(Entity*, u32, u32);
extern u32 sub_080044EC(Entity*, u32);
extern void sub_0800451C(Entity*);
extern void sub_08004542(Entity*);
extern void sub_080085B0(Entity*);
extern void sub_08008796(Entity*, u32, u32, u32);
extern void sub_08016AD2(Entity*);
extern void sub_080171F0(void);
extern u32 sub_0801766C(Entity*);
extern void sub_0801AF18(const u8*, u32, u32);
extern void sub_0801AFE4(void);
extern void sub_0801C1D4(void);
extern void sub_0801C25C(void);
extern void sub_0801E104(void);
extern void sub_08027870(Entity*);
extern void sub_08030118(u32);
extern u32 sub_08031E04(Entity*);
extern void sub_08031E48(Entity*, Entity*);
extern void sub_08032290(Entity*);
extern u32 sub_080322A4(Entity*);
extern void sub_080322E8(Entity*);
extern void sub_08032338(Entity*);
extern void sub_0803C0AC(Entity*);
extern void sub_08049CF4(Entity*);
extern Entity* sub_08049DF4(u32);
extern u32 sub_08049EE4(Entity*);
extern u32 sub_08049F1C(Entity*, Entity*, u32);
extern u32 sub_08049F84(Entity*, u32);
extern u32 sub_08049FA0(Entity*);
extern u32 sub_08049FDC(Entity*, u32);
extern u32 sub_0804A024(Entity*, u32, u32);
extern u32 sub_0804A044(Entity*, Entity*, u32);
extern void sub_0804A720(Entity*);
extern void sub_0804AA1C(Entity*);
extern void sub_0804C128();
extern u32 sub_080542AC(u32);
extern void sub_08054564();
extern void sub_08054570(void);
extern s32 sub_08056338(void);
extern void sub_08057044(u32, struct_020227E8*, u32);
extern void sub_080575C8(u32);
extern void sub_08057688(void);
extern void sub_080580B0(u32);
extern void sub_08058324(u32);
extern void sub_08059278(void);
extern void sub_0805B4D0(u32);
extern void sub_0805BC4C(void);
extern void sub_0805EC60(Entity*);
extern void sub_0805EC9C(Entity*, u32, u32, u32);
extern void sub_0805ED14(u32*);
extern u32* sub_0805F25C(u32);
extern u32 sub_0805F7A0(u32);
extern void sub_0805F8E4(u32 r0, WStruct* r1);
extern u32 sub_0805F8F8(u32);
extern void sub_080600F0(Entity*);
extern void sub_08060158(Entity*);
extern void sub_0806D02C(Entity*);
extern void sub_0806D0B0(Entity*);
extern void sub_0806F4E8(Entity*);
extern u32 sub_0806F520();
extern u32 sub_0806F5B0(u32);
extern u32 sub_0806F824(Entity*, Entity*, s32, s32);
extern u32 sub_0806F948(Entity*);
extern void sub_0806FBB4(Entity*);
extern bool32 sub_0806FC80(Entity*, Entity*, s32);
extern void sub_0806FCF4(Entity*, s32, s32, s32);
extern void sub_0806FD3C(Entity*);
extern bool32 sub_0806FDA0(Entity*);
extern void sub_0806FEBC(Entity*, u32, Entity*);
extern void sub_080751E8(u32, u32, void*);
extern void sub_08077B98(ItemBehavior*);
extern void sub_08077BB8(ItemBehavior*);
extern Entity* sub_08077C0C(ItemBehavior*, u32);
extern Entity* sub_08077C94(ItemBehavior*, u32);
extern void sub_08077D38(ItemBehavior*, u32);
extern void sub_08077DF4(ItemBehavior*, u32);
extern void sub_08077E3C(ItemBehavior*, u32);
extern void sub_08077E54(ItemBehavior*);
extern void sub_08077E78(ItemBehavior*, u32);
extern bool32 sub_08077EC8(ItemBehavior*);
extern bool32 sub_08077EFC(ItemBehavior*);
extern bool32 sub_08077F10(ItemBehavior*);
extern bool32 sub_08077F24(ItemBehavior*, u32);
extern void sub_08077F50(ItemBehavior*, u32);
extern bool32 sub_08077FEC(u32);
extern void sub_08078180(void);
extern void sub_080784C8();
extern void sub_08078790(Entity*, u32);
extern void sub_080787CC(Entity*);
extern s32 sub_08078800(Entity*);
extern void sub_08078850(Entity*, u32, u32, void*);
extern s32 sub_0807887C(Entity*, u32, u32);
extern void sub_080788E0(Entity*);
extern s32 sub_08078904();
extern void sub_08078930(Entity*);
extern void sub_08078954(Entity*);
extern void sub_08078AC0(u32, u32, u32);
extern void sub_08078B48(void);
extern void sub_08078E84(Entity*, Entity*);
extern void sub_08078FB0(Entity*);
extern void sub_08079184();
extern void sub_0807919C();
extern void sub_0807921C();
extern void sub_080792BC(s32, u32, u32);
extern u32 sub_0807953C(void);
extern void sub_08079708(Entity*);
extern u32 sub_08079B24(void);
extern void sub_08079BD8(Entity*);
extern u32 sub_08079D48();
extern void sub_08079D84(void);
extern u32 sub_08079F8C(void);
extern u32 sub_08079FC4(u32);
extern void sub_0807A050(void);
extern void sub_0807A5B8(u32);
extern u32 sub_0807A894(Entity*);
extern void sub_0807A8D8(Entity*);
extern void sub_0807AA80(Entity*);
extern void sub_0807AABC(Entity*);
extern void sub_0807ACCC(Entity*);
extern u32 sub_0807B014();
extern void sub_0807B0C8(void);
extern void sub_0807B7D8(u32, u32, u32);
extern void sub_0807B9B8(u32, u32, u32);
extern void sub_0807BA8C(u32, u32);
extern void sub_0807BB68(s16*, u32, u32);
extern bool32 sub_0807BD14(Entity*, u32);
extern bool32 sub_080806BC(u32, u32, u32, u32);
extern void sub_0808091C(const ScreenTransitionData*, u32);
extern void sub_080809D4(void);
extern void sub_08080CB4(Entity*);
extern u32 sub_0808288C(Entity*, u32, u32, u32);
extern bool32 sub_08083734(Entity*, u32);
extern void sub_08095C48(Entity*);
extern void sub_0809E918(Entity*);
extern void sub_0809E96C(Entity*);
extern u32 sub_0809E9A0(void);
extern void sub_0809EABC(Entity*);
extern void sub_0809EAD8(Entity*);
extern void sub_0809EB30(Entity*);
extern void sub_080A1ED0(u32, u32, u32);
extern Entity* sub_080A2A3C(Entity*, u32, u32, u32);
extern Entity* sub_080A2AD4(Entity*);
extern void sub_080A2AF4(Entity*, s32, s32);
extern void sub_080A2CC0(Entity*, u16**, u16*);
extern void sub_080A57F4(void);
extern void sub_080A71C4(u32, u32, u32, u32);
extern void sub_080A7C18(u32, u32, u32);
extern void sub_080ADD70(void);
extern bool32 sub_080AE4CC(Entity*, u32, u32, u32);
extern void sub_080AE58C(Entity*, u32, u32);
extern void sub_080AF284(void);
extern bool32 sub_080B1B54(u32);
#endif
