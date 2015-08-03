#pragma once

#include <gloperate/pipeline/AbstractPipeline.h>
#include <gloperate/pipeline/Data.h>

#include <glm/vec3.hpp>

namespace gloperate
{

class AbstractTargetFramebufferCapability;
class PerspectiveProjectionCapability;
class AbstractCameraCapability;
class AbstractViewportCapability;
class AbstractVirtualTimeCapability;
class TypedRenderTargetCapability;
class ResourceManager;
class InputCapability;
class CoordinateProvider;

} // namespace gloperate



class MarchingCubesPipeline : public gloperate::AbstractPipeline
{
public:
	MarchingCubesPipeline();
    virtual ~MarchingCubesPipeline() = default;

public:
    gloperate::Data<gloperate::AbstractViewportCapability *> viewport;
    gloperate::Data<gloperate::AbstractCameraCapability *> camera;
    gloperate::Data<gloperate::PerspectiveProjectionCapability *> projection;
    gloperate::Data<gloperate::ResourceManager *> resourceManager;

    gloperate::Data<bool> showWireframe;
    gloperate::Data<bool> freezeChunkLoading;

    gloperate::Data<bool> useMipMap;
    gloperate::Data<glm::vec3> rotationVector1;
    gloperate::Data<glm::vec3> rotationVector2;
    gloperate::Data<float> warpFactor;
    gloperate::Data<bool> removeFloaters;
    gloperate::Data<bool> useShadow;
    gloperate::Data<bool> useOcclusion;
    gloperate::Data<bool> useGroundTexture;
    gloperate::Data<bool> useStriationTexture;

    gloperate::Data<gloperate::AbstractTargetFramebufferCapability *> targetFBO;
    gloperate::Data<gloperate::TypedRenderTargetCapability *> renderTargets;
    gloperate::Data<gloperate::InputCapability *> input;
    gloperate::Data<gloperate::CoordinateProvider *> coordinateProvider;

};
