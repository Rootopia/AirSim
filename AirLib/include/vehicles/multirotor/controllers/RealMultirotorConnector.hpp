// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef air_RealMultirotorConnector_hpp
#define air_RealMultirotorConnector_hpp

#include "controllers/VehicleConnectorBase.hpp"

namespace msr { namespace airlib {

class RealMultirotorConnector : public VehicleConnectorBase
{
public:
    RealMultirotorConnector(VehicleControllerBase* controller)
        : controller_(controller)
    {
    }

    virtual void updateRenderedState() override
    {
    }

    virtual void updateRendering(float dt) override
    {
        unused(dt);
    }

    virtual void startApiServer() override
    {
    }

    virtual void stopApiServer() override
    {
    }

    virtual bool isApiServerStarted() override
    {
        return false;
    }

    virtual VehicleControllerBase* getController() override
    {
        return controller_;
    }

    virtual VehicleCameraBase* getCamera(unsigned int index) override
    {
        //TODO: we need to support this but with only scene image type
        throw std::logic_error("getCamera() call is only supported for simulation");
    }

    virtual void setPose(const Pose& pose, bool ignore_collison) override
    {
        throw std::logic_error("setPose() call is only supported for simulation");
    }

    virtual Pose getPose() override
    {
        throw std::logic_error("getPose() call is only supported for simulation");
    }

    virtual bool setSegmentationObjectID(const std::string& mesh_name, int object_id,
        bool is_name_regex = false) override
    {
        throw std::logic_error("setSegmentationObjectID() call is only supported for simulation");
    }
    virtual int getSegmentationObjectID(const std::string& mesh_name) override
    {
        throw std::logic_error("getSegmentationObjectID() call is only supported for simulation");
    }


private:
    VehicleControllerBase* controller_;
};


}} //namespace
#endif