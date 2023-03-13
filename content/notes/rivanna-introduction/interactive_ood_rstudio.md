---
title: Rstudio Server
date: "2022-10-01:00:00Z"
draft: false  # Is this a draft? true/false
toc: false  # Show table of contents? true/false
type: docs  # Do not modify.
weight: 650

menu:
  rivanna-introduction:
    parent: Interactive Apps with Open OnDemand
---

Rstudio Server is a standalone app similar to JupyterLab. Starting a session is very similar to JupyterLab, but the Webform differs slightly.  Instead of kernel tiles, you will select a version of R from a dropdown menu from those available.  In this example, the version is R 3.6.2.

{{< figure src="/notes/rivanna-introduction/img/OOD_Rstudio_form.png" caption="Starting an Rstudio session." >}}

Rstudio Server can continuing running any active processes if your network is disconnected.  Simply log back in to Open OnDemand, go to the My Interactive Sessions tab, and click `Launch` again.  It will reconnect, not launch another session.  