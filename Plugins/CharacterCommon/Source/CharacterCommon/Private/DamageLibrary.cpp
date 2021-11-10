

#include "DamageLibrary.h"




/** Hurts the specified actor with generic damage.
 * @param DamagedActor - Actor that will be damaged.
 * @param BaseDamage - The base damage to apply.
 * @param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)
 * @param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)
 * @param DamageTypeClass - Class that describes the damage that was done.
 * @return Actual damage the ended up being applied to the actor.
 */

UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Game|FalconDamage", meta = (WorldContext = "WorldContextObject")))
static float FalconApplyDamage(AActor* DamageCauser, float Magnitude, AActor* DamageTarget, TSubclassOf<class UDamageType> DamageTypeClass);
