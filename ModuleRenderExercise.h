#ifndef __ModuleRenderExercise_h__
#define __ModuleRenderExercise_h__

#include "Module.h"
#include "MathGeoLib.h"

class ModuleRenderExercise : public Module
{
public:
    ModuleRenderExercise();
    ~ModuleRenderExercise();

	bool            Init    ();
	update_status   Update  ();
	bool            CleanUp ();
	math::float4x4& LookAt	(math::float3 target, math::float3 eye, math::float3 up);
	math::float4x4& GetProjectionMatrix();
	float&			TransformBuffer(float& vbo, math::float4x4 view, math::float4x4 proj);

private:
    unsigned vbo        = 0;

};

#endif /* __ModuleRenderExercise_h__ */
