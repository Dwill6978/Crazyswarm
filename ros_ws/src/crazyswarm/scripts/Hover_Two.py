"""Takeoff-hover-land for Two CF. Useful to validate multi-drone config."""

import pycrazyswarm


TAKEOFF_DURATION = 2.0
HOVER_DURATION = 3.0


def main():
    swarm = pycrazyswarm.Crazyswarm()
    timeHelper = swarm.timeHelper
    "cf = swarm.allcfs.crazyflies[0]"
    allcfs  = swarm.allcfs

    "for cf in swarm.allcfs.crazyflies:"
    timeHelper.sleep(TAKEOFF_DURATION)
    allcfs.takeoff(targetHeight=0.5, duration=TAKEOFF_DURATION)
    timeHelper.sleep(TAKEOFF_DURATION + HOVER_DURATION)
    allcfs.land(targetHeight=0.04, duration=2.5)
    timeHelper.sleep(TAKEOFF_DURATION)


if __name__ == "__main__":
    main()