#pragma once

#include <queue>

#include <glm/vec3.hpp>
#include <vec3_hash.h>

#include <globjects/base/ref_ptr.h>


#include <gloperate/pipeline/AbstractStage.h>
#include <gloperate/pipeline/Data.h>
#include <gloperate/pipeline/InputSlot.h>


namespace gloperate
{
    class AbstractViewportCapability;
    class PerspectiveProjectionCapability;
    class AbstractCameraCapability;
}
class Chunk;


class AddChunksStage : public gloperate::AbstractStage
{
public:
    AddChunksStage();

    virtual void initialize() override;

public:
    gloperate::InputSlot<gloperate::AbstractCameraCapability *> camera;

    gloperate::Data<std::vector<glm::vec3>> chunksToAdd;

protected:
    virtual void process() override;

};

