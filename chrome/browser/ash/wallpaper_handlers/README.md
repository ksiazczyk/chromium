---
type: readme
title: Wallpaper handlers directory overview
summary: Explains that this directory holds wallpaper fetch and parse handlers used by the personalization web app and older ash wallpaper UI.
---

This directory contains different types of handlers for fetching and parsing
wallpapers. This is used by the personalization system web application as well
as some older native wallpaper modifying UI within ash. Some of the handlers
fetch from REST endpoints and do not require authentication. Others work with
the logged in user's GAIA account's google photos.
