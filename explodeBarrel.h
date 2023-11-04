// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Sound/SoundCue.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "explodeBarrel.generated.h"

UCLASS(Blueprintable)
class GDP_CPP_PYTHON_DEMO_API AexplodeBarrel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AexplodeBarrel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisableAnywhere, BlueprintReadOnly, Category= "Components");
	UStaticMeshComponent* BarrelMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Exploding Barrel")
	float HitPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Exploding Barrel")
	float ExplosionDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "ExplodingBarrel")
	float ExplosionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Exploding Barrel")
	USoundCue* ExplosionSound;

	UPROPERTY(VisibleAnywhere, Category= "Effects")
	UParticleSystem* ExplosionParticle;

	UPROPERTY(VisibleAnywhere, Category= "Effects")
	UParticleSystemComponent* FireParticleSystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Exploding Barrel")
	UParticleSystem* FireParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Effects")
	URadialForceComponent* RadialForce;

	UFUNCTION()
	void OnDamageTaken(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCause);

	FTimerHandle CountdownTimerHandle;

	void Countdown();
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
