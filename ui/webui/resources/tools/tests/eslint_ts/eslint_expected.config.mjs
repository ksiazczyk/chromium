// ---docerion
// type: config
// title: Expected ESLint config for TypeScript lint tests
// summary: ESLint config module extending the generated base config with TypeScript parser project settings, serving as the expected configuration in the ESLint tests.
// ---

import {defaultConfig, } from '%(path_to_build_dir)s/gen/ui/webui/resources/tools/eslint/eslint_ts.config_base.js';

export default [
  ...defaultConfig,
  
  {
    languageOptions: {
      parserOptions: {
        'project': ['%(path_to_tsconfig)s'],
      },
    },
  },
];