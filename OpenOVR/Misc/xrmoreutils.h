//
// Like xrutil.h but not included in every file by default
//
// Created by ZNix on 15/03/2021.
//

#pragma once

#include "generated/interfaces/vrtypes.h"
#include <glm/mat4x4.hpp>
#include <openxr/openxr.h>
#include <optional>

namespace xr_utils {

bool PoseFromSpace(vr::TrackedDevicePose_t* pose, XrSpace space, vr::ETrackingUniverseOrigin origin,
    std::optional<glm::mat4> extraTransform = {});

bool PoseFromHandTracking(vr::TrackedDevicePose_t* pose, XrHandJointLocationsEXT locations, XrHandJointVelocitiesEXT velocities, bool isRight);
} // namespace xr_utils
