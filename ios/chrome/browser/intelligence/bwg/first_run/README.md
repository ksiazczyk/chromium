---
type: readme
title: Gemini First Run Experience (FRE) Layer
summary: Describes the coordinator and UI components implementing the Gemini First Run Experience onboarding and consent flows on Chrome for iOS, including tests and Lottie resources.
relations:
  - documents /ios/chrome/browser/intelligence/bwg/first_run/ui/gemini_first_run_egtest.mm
  - documents /ios/chrome/browser/intelligence/bwg/first_run/ui/gemini_app_store_promo_egtest.mm
---

# Gemini First Run Experience (FRE) Layer
*Last updated: 2026*

This directory contains the coordinator and user interface (UI) components responsible for the **Gemini First Run Experience (FRE)** onboarding and consent flows on Chrome for iOS.

## Structure

*   **`coordinator/`**: Contains `GeminiFirstRunCoordinator` and `GeminiFirstRunMediator` which manage the onboarding presentation, lifecycle, preference updates, and feature engagement.
*   **`ui/`**: Contains the view controllers, views, carousels, protocols, EarlGrey integration tests (`gemini_first_run_egtest.mm`, `gemini_app_store_promo_egtest.mm`), and Lottie animation resources (`resources/FRE_*.json`) for the promo, visual rich, lightweight, and consent screens.
