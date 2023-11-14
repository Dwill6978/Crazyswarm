
"use strict";

let GoTo = require('./GoTo.js')
let Land = require('./Land.js')
let NotifySetpointsStop = require('./NotifySetpointsStop.js')
let SetGroupMask = require('./SetGroupMask.js')
let StartTrajectory = require('./StartTrajectory.js')
let Stop = require('./Stop.js')
let Takeoff = require('./Takeoff.js')
let UpdateParams = require('./UpdateParams.js')
let UploadTrajectory = require('./UploadTrajectory.js')

module.exports = {
  GoTo: GoTo,
  Land: Land,
  NotifySetpointsStop: NotifySetpointsStop,
  SetGroupMask: SetGroupMask,
  StartTrajectory: StartTrajectory,
  Stop: Stop,
  Takeoff: Takeoff,
  UpdateParams: UpdateParams,
  UploadTrajectory: UploadTrajectory,
};
