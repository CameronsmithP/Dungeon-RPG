// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "MyProject/DebugingMacros.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
	//stored the address to RootComponent^
	//garbage collector will see that RootComponent no longer points to Item mesh
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	int32 AvgInt = Avg<int32>(1, 3);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 1 and 3: %d"), AvgInt);

	float AvgFloat = Avg<float>(3.45f, 7.86f);
	UE_LOG(LogTemp, Warning, TEXT("Avg of 3.45 and 7.86: %d"), AvgInt);

	
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//movement rate in units of cm/s
	//float MovementRate = 50.f;
	//float RotationRate = 45.f;

	//MovementRate * DeltaTime (cm/s) * (s/frame = (cm/frame)

	//AddActorWorldOffset(FVector(MovementRate * DeltaTime, 0.f, 0.f));
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));


	RunningTime += DeltaTime;
	//short hand for RunningTime = RunningTime + DeltaTime

	float DeltaX = TransformedSin();
	float DeltaY = TransformedCosin();
	float DeltaZ = TransformedSin();
	// 0.25f  is amplitude for sin wave
	//TransformedSin(DeltaTime);

	//moves actor in circle
	AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));
	//for circular motions slot DeltaX and DeltaY at the same time^
	
	//DRAW_SPHERE_SingleFrame(GetActorLocation());
	//DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);

	//FVector AvgVector = Avg<FVector>(GetActorLocation(), FVector::ZeroVector);
	//DRAW_POINT_SingleFrame(AvgVector);

	

	/* UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	if (GEngine)
	{
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan,Message);

		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
	}

	*/

}

float AItem::TransformedSin()
{
	//Value gets deposited into the equation below then sent to what ever called the function
	return Amplitude* FMath::Sin(RunningTime * TimeConstant);
}

float AItem::TransformedCosin()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

